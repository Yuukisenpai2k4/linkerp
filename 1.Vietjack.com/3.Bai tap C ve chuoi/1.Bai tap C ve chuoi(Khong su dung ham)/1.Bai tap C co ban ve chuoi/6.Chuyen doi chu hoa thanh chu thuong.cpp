#include<stdio.h>
#include<string.h>

int main(){
	char a[100];
	
	printf("Nhap vao 1 chuoi ki tu hoa: ");
	gets(a);
	
	strlwr(a);
	printf("Chuoi ki tu thuong:\n%s", a);
	return 0;
}
