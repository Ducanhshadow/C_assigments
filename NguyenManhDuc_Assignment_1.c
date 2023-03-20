#include <string.h>
#include <stdio.h>

int main() {
    printf ("Input: ");
    char x[255];
    fgets(x, 255, stdin);
    int i;
    for (i = 0; i < strlen(x); i++) {
        if (x[i] >= '!' && x[i] <= '/'){
            x[i] = ' ';
        }
        if (x[i] >= 'A' && x[i] <= 'Z') {
            x[i] += 32;
        }
    }
    char new_arr[255];
    int j;
    int k =0;
    for (j = 0; j < strlen(x); j++){
        if (x[j] == ' ' && x[j+1] == ' '){
            continue;
        }else{
            new_arr[k] = x[j];
            k += 1;// increment k after each character is added to new_arr
            
        }
    }
    new_arr[k] = '\0'; //add null terminator to the end of the new_arr string
    printf("Output: %s", new_arr);
    return 0;
}