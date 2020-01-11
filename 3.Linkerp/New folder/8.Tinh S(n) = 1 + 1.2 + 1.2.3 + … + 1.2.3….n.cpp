#include<stdio.h>

int main(){
	int n;
	do{
		printf("Nhap n: ");
		scanf("%d", &n);
		
	}while(n < 1 && printf("Nhap lai gia tri n: "));
	
	int i = 1;
	int sum = 0; 
	int p = 1;
	
	while(i <= n){
		p = p * i;
		sum = sum + p;
		i++;
	}
	
	printf("Tong : %d", sum);
	return 0;
}
