#include<stdio.h>

int sum(int);

int  main(){
	int i, num;
	printf("Nhap vao 1 so: ");
	scanf("%d", &num);
	
	int result;
	result = sum(num);
	printf("\nTong cac so tu 1 - %d la: %d", num, result);
	
	return 0;
}

int sum(int num){
	int n;
	if(num == 1)
		return 1;
	else
		n = num + sum(num - 1);
	
	return n;
}

