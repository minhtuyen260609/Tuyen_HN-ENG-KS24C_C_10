#include <stdio.h>
int main(){
    int arr[] = {25, 10, 15, 5, 20, 30};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("mang ban dau la: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
    printf("\nmang sap xep theo thu tu tang dan la: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
