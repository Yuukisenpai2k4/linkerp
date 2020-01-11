#include<stdio.h>

int main(){
	int n;
	int i = 1;
	float sum = 0;
	
	do{
		printf("Nhap n: ");
		scanf("%d", &n);
		
		if(n < 1)
			printf("\nn>=1. Xin nhap lai.\n");
	
	}
	while(n < 1);
	
	while(i <= n){
		sum = sum + 1.0 / i;
		i++;
	}
	
	printf("i = %d\n", i);
	printf("i = %f\n", sum);
	printf("\nTong cua 1 + 1/2 + 1/3 + ... 1/%d = %d", n, sum);
	
	
}
