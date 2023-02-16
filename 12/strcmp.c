int StringCompare(const char *p_string1, const char *p_string2)
{
    while(1){
        if(*p_string1 != *p_string2) break;
        if(*p_string1 == 0) break;
        p_string1++;
        p_string2++;
    }

    if(*p_string1 == *p_string2) return 0;
    if(*p_string1 > *p_string2) return 1;
    return -1;
}