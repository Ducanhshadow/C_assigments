// assignment 3
#include <stdio.h>
#include <string.h>
// swap fuction
void swap(int *a, int*b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
// BubbleSort function
void BubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}
// sort an array  
int main(){
    int arr[10] = {2,6,4,8,10,12,89,68,45,37};
    int i;
    BubbleSort(arr, 10);
    for (i = 0; i <10; i++){
        printf("%d", arr[i]);
        printf(" ");
    }return 0;
}