#include<stdio.h>

int main(){
	int n;
	float x;
	do{
		
		printf("Nhap x: ");
		scanf("%f", &x);
		printf("Nhap n: ");
		scanf("%d", &n);
		
	}while(n < 1 && printf("Nhap lai gia tri n: "));
	
	float p = 1;
	int i = 1;
	float sum = 0;
	
	while(i <= n){
		p = p * x;
		sum = sum + p;
		i++;
	}
	
	printf("TOng = %f", sum);
	return 0;
	
	
}
