#include<stdio.h>
#include<string.h>

int main(){
	char a[100];
	char b[100];
	
	printf("Nhap vao 1 chuoi: \n");
	gets(a);
	
	strupr(a);
	printf("Chuoi dang chu hoa la: \n%s", a);
	return 0;
}
