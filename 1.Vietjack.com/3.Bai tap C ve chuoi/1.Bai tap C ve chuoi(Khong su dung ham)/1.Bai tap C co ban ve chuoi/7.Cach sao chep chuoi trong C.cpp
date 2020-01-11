#include<stdio.h>
#include<string.h>

int main(){
	char a1[100];
	char a2[100];
	
	printf("Nhap vao 1 chuoi:\n");
	gets(a1);
	
	strcpy(a2, a1);
	printf("Chuoi sao chep la:\n%s", a2);
	return 0;
}
