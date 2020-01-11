#include<stdio.h>
#include<string.h>

int main(){
	char a[100];
	printf("Nhap vao 1 chuoi:\n");
	gets(a);
	
	int length;
	length = strlen(a);
	
	printf("Do dai cua chuoi:\n%s la %d", a, length);
	return 0;
}
