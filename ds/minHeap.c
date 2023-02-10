#include <stdio.h>

typedef struct heap {
    int arr[100004];
    int size;
} heap;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int insert(heap* p, int x) {
	p->arr[p->size] = x;
	int cur = p->size;
	int parent = (p->size - 1) / 2;

	while (cur > 0 && p->arr[cur] < p->arr[parent]) {
		swap(&p->arr[cur], &p->arr[parent]);
		cur = parent;
		parent = (parent - 1) / 2;
	}
	p->size++;

	return 1;
}

int pop(heap* p) {
	if (p->size <= 0) {
		return 0;
	}

	int cut = p->arr[0];
	p->size--;
	p->arr[0] = p->arr[p->size];

	int cur = 0, minNode = 0;
	int left_child = cur * 2 + 1;
	int right_child = cur * 2 + 2;

	while (left_child < p->size) {
		if (p->arr[left_child] < p->arr[minNode]) {
			minNode = left_child;
		}
		if (right_child < p->size && p->arr[right_child] < p->arr[minNode]) {
			minNode = right_child;
		}
		if (cur == minNode) {
			break;
		}
		else {
			swap(&p->arr[cur], &p->arr[minNode]);
			cur = minNode;
			left_child = cur * 2 + 1;
			right_child = cur * 2 + 2;
		}
	}
	return cut;
}


void initHeap(heap *hp){
    hp->size = 0;
}

int main(void){
    int n, input;
    heap MinHeap;
    initHeap(&MinHeap);
    scanf("%d", &n);
    for(int i =0; i<n; i++){
        scanf("%d", &input);
        if(input == 0) {
            printf("%d\n", pop(&MinHeap));
            continue;
        } 
        insert(&MinHeap, input);
        
    }
    return 0;
}
