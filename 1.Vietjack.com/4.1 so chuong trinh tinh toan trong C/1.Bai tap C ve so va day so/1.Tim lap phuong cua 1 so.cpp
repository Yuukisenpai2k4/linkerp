#include<stdio.h>

int main(){
	int n;
	
	printf("Nhap vao 1 so nguyen: ");
	scanf("%d", &n);
	
	n = n*n*n;
	
	printf("Lap phuong cua n la: %d", n);
	return 0;
}
