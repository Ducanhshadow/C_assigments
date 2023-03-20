// assignment 2
#include <stdio.h>

// upper character funtion by using pointer
void touppercase(char *str)
{
    char *p = str;
    while(*p != '\0')
    {
        if(*p >= 'a' && *p <= 'z')
        {
            *p = *p - 32;
        }
        p++;
    }
}

int main() {
    // Write C code here
    char arr[255];
    printf("Input: ");
    fgets(arr, 255, stdin);
    touppercase(arr);
    
    printf("Output: %s", arr);
    return 0;
}