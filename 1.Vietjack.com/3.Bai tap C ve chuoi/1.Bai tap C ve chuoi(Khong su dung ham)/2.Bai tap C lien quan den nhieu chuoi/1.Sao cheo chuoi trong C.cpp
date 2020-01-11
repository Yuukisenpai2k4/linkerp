#include<stdio.h>

int main(){
	char a[100];
	char b[100];
	
	printf("Nhap vao 1 chuoi:\n");
	scanf("%s", a);
	
	int length = 0;
	while(a[length] != '\0'){
		b[length] = a[length];
		length ++;
	}
	
	b[length] != '\0';	//Gia tri '\0': ket thuc chuoi sao chep
	
	printf("Chuoi a la: %s\n", a);
	printf("Chuoi b la: %s\n", b);
	
	return 0;
}
