#include<stdio.h>

int main(){
	int n;
	int x;
	do{
		printf("Nhap x: ");
		scanf("%d", &x);
		printf("Nhap n: ");
		scanf("%d", &n);
		
	}while(n<1 && printf("Nhap lai gia tri n: "));
	
	int i = 1;
	int p = 1;
	int sum = 0;
	
	while(i <= n){
		p = p * x * x;
		sum = sum + p;
		i++;
	}
	
	printf("Tong = %d", sum);
	return 0;
}
