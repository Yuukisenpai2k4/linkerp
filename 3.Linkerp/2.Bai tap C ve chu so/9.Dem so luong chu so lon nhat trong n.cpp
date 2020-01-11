#include<stdio.h>

int main(){
	int n;
	do{
		printf("Nhap n: ");
		scanf("%d", &n);
		
	}while(n < 0 && printf("n >= 0. "));
	
	int i;
	int max = 0;
	int count = 1;
	
	if( n == 0)
		count = 1;
		
	do{
		i = n % 10;
		
		if(i == max)
			count ++;
		if (i > max)
			max = i;
			
	}while(n /= 10);
	
	printf("Chu so lon nhat la: %d", max);
	printf("\nSo luong chu so lon nhat la: %d", count);
	
	return 0;
	
}
