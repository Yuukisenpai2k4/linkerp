#include<stdio.h>

int main(){
	int n;
	do{
		printf("Nhap n: ");
		scanf("%d", &n);
		
		if(n < 1)
			printf("n >= 1. Xin nhap lai.\n");
	}while(n < 1);
	
	float sum = 0;
	for(int i=1; i<=n; i++)
		sum = sum + 1.0 / ((2 * i) + 1);
		
	printf("Tong = %d", sum);
	return 0;
}
