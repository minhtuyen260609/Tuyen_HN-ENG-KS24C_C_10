#include <stdio.h>
int main(){
    int arr[] = {5, 8, 12, 7, 19, 3, 15};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("mang ban dau la: ");
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
    printf("\nmang sau khi sap xep la: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    int element;
    printf("\nmoi nhap phan tu can tim: ");
    scanf("%d", &element);
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            printf("phan tu can tim dang o vi tri so: %d\n", i+1);
            found = 1;
        }
    }
    if (!found) {
        printf("phan tu can tim khong co trong mang\n", element);
    }
    return 0;
}
