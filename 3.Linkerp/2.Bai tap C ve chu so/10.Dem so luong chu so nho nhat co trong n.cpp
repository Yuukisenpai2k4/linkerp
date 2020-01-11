#include<stdio.h>

int main(){
	int n;
	do{
		printf("Nhap n: ");
		scanf("%d", &n);
		
		
	}while(n < 0 &&  printf("n >= 0."));
	
	int min;
	int i;
	int count = 0;
	min = n % 10;
	
	if(n == 0)
		count = 1;
	
	do{
		i = n % 10;
		if(i == min)
			count ++;
			
		if(i < min)
			min = i;
			
	}while(n /= 10);
	
	printf("\nChu so nho nhat la: %d", min);
	printf("\nSo luong chu so nho nhat la: %d", count);
	
	return 0;
}
