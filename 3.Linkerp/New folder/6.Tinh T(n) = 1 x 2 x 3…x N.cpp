#include<stdio.h>

int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	if(n < 1)
		printf("n >= 1. Xin nhap lai: ");
	
	int i = 1;
	int P = 1;
	while(i <= n){
		P = P * i;
		i++;
	}
	printf("\nTich 1x2x...x %d la: %ld", i, P);
	return 0;
}
