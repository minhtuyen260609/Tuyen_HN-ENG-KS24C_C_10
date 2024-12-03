#include <stdio.h>
int main(){
    int arr[] = {25, 10, 15, 5, 20, 30};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("mang ban dau la: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    for (int i = 1; i < size; i++) {
        int element = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > element) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = element;
    }
    printf("\nmang sap xep theo thu tu tang dan la: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
