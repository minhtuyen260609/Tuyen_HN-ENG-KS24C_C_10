#include <stdio.h>
int main() {
    int n, i, j, temp, target,pos;
    int value=0;
    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d", &n);
    int arr[n];
    printf("Nhap %d phan tu cho mang:\n", n);
    for (i = 0; i < n; i++) {
        printf("Phan tu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Mang sau khi sap xep:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Nhap so can tim: ");
    scanf("%d", &target);
	for (int i=0;i<n;i++){
		if(arr[i]==target){
			value+=1;
			pos=i;
		}
	}
	if(value==1){	
	printf("Phan tu %d da duoc tim thay tai vi tri %d.\n", target, pos+1);
	} else{
	printf("Phan tu %d khong ton tai trong mang.\n", target);
    }
    return 0;
}

