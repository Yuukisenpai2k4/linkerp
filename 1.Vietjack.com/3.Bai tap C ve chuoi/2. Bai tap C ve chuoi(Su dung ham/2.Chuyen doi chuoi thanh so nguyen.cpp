#include<stdio.h>
#include<stdlib.h>

int main(){
	int i;  // 5 chu so
	char a[20];
	// 123
	printf("Nhap vao 1 chuoi co chua so nguyen: ");
	scanf("%s", a);
	
	i = atoi(a);
	printf("\nSo nguyen vua nhap: %d", i);
	
	return 0;
}
