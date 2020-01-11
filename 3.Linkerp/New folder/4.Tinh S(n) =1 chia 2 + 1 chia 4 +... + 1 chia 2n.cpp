#include<stdio.h>

int main(){
	int n;
	int i;
	float sum = 0; 
	
	do{
		printf("Nhap n: ");
		scanf("%d", &n);
		
		if(n < 1)
			printf("n >= 1. Xin nhap lai.");
	}while(n <1);
	
	for(i=1; i<=n; i++)
		sum = sum + 1.0 / (2 * i);
		
	printf("TOng: %f", sum);
	return 0;
}
