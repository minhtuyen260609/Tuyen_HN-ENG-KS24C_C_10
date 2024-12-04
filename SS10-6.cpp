#include <stdio.h>
int main() {
    int n, i, target, count = 0;
    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d", &n);
    int arr[n];
    int positions[n];
    printf("Nhap %d phan tu cho mang:\n", n);
    for (i = 0; i < n; i++) {
        printf("Phan tu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Nhap so can tim: ");
    scanf("%d", &target);
    for (i = 0; i < n; i++) {
        if (arr[i] == target) {
            positions[count] = i;
            count++;
        }
    }
    if (count > 0) {
        printf("Phan tu %d da duoc tim thay tai cac vi tri: ", target);
        for (i = 0; i < count; i++) {
            printf("%d ", positions[i]);
        }
        printf("\n");
    } else {
        printf("Phan tu %d khong ton tai trong mang.\n", target);
    }
    return 0;
}

