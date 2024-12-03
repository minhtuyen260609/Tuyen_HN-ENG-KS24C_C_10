#include <stdio.h>
int main() {
    int arr[] = {25, 10, 15, 5, 20, 30};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("mang ban dau la: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("\nmang sap xep theo thu tu tang dan la: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

