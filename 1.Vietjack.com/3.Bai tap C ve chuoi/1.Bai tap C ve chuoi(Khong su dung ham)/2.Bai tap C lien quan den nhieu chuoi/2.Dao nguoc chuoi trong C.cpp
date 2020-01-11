#include<stdio.h>

int main(){
	char a1[100];	//Khai bao chuoi
	char a2[100];	//Bien de luu chuoi dao nguoc
	
	printf("Nhap vao 1 chuoi:\n");
	scanf("%s", a1);
	
	int i = 0;
	int j = 0;
	
	while(a1[i] != '\0')
		i++;
		
	printf("In chuoi theo chieu dao nguoc:\n");
	for(j=--i; j>=0; j--)
		printf("%c", a1[j]);
		
	i = 0;
	printf("\nLuu giu chuoi nay trong chuoi dao nguoc.\n");
	while(i >= 0){
		a2[i] = a1[j];
		i--;
		j++;
	}
	
	a1[j] = '\0';	//Gia tri null: Ket thuc chuoi
	printf("%s\n", a2);
	
	return 0;
	
}
