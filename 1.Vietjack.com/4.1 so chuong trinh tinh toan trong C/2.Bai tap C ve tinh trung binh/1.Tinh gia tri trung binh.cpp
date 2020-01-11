#include<stdio.h>

int main(){
	int a[100];
	int i, n;
	int sum = 0;
	
	printf("Nhap vao so phan tu: ");
	scanf("%d", &n);
	for(i=0; i<n; i++){
		printf("Phan tu - %d: ", i);
		scanf("%d", &a[i]);
	}
	
	for(i=0; i<n; i++)
		sum += a[i];
	
	printf("Tong cua mang  la %d\n", sum);
	printf("Gia tri trung binh la: %f\n", sum/(float)n);
	return 0;
}

