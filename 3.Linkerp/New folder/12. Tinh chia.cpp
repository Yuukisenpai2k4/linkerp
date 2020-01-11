#include<stdio.h>


//Tính S(n) = 1 + 1/1 + 2 + 1/ 1 + 2 + 3 + ….. + 1/ 1 + 2 + 3 + …. + N

int main(){
	int n;
	do{
		printf("Nhap n: ");
		scanf("%d", &n);
		
	}while(n < 1 && printf("n >= 1. Nhap lai n: "));
	
	float sum1 = 0;
	float sum2 = 0;
	int i = 1;
	
	while(i <= n){
		sum1 = sum1 + i;
		sum2 = sum2 + 1.0 /sum1;
		i++;
	}
	
	printf("Tong = %f", sum2);
	return 0;
}
