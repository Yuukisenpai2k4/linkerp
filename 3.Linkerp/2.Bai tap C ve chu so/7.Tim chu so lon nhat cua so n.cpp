#include<stdio.h>

int main(){
	int n;
	do{
		printf("Nhap n: ");
		scanf("%d", &n);
		
	}while(n < 0 && printf("n >= 0."));
	
	int i;
	int max = 0;
	
	if(n == 0)
		max = 0;
		
	do{
		i = n % 10;
		if(i > max)
			max = i;	
			
	}while(n /= 10);
	
	printf("chu so lon nhat la: %d", max);
	
	return 0;
}
