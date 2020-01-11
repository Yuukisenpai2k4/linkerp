#include<stdio.h>

int main(){
	int n;
	do{
		printf("Nhap n: ");
		scanf("%d", &n);
		
	}while(n < 0 && printf("n >= 0."));
	
	int i;
	int min;
	min = n % 10;
	
	if( n == 0)
		min = 0;
		
	do{
		i = n % 10;
		if(i < min)
			min = i;
			
	}while(n /= 10);
	
	printf("Chu so nho nhat trong %d la: %d", n, min);
	
	return 0;
}
