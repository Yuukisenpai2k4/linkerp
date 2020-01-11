#include<stdio.h>
#include<String.h>

int main(){
	char a1[100];
	char a2[100];
	char a3[100];
	
	printf("Nhap vao chuoi a1:\n");
	gets(a1);
	printf("Nhap vao chuoi a2:\n");
	gets(a2);
	
	strcpy(a3, a1);
	strcat(a3, a2);
	
	printf("\nChuoi vua noi la: \n%s", a3);
	
	return 0;
}
