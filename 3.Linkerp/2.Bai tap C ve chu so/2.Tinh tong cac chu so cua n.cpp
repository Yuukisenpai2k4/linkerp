#include<stdio.h>


int main(){
	long n;
	do{
		printf("Nhap n: ");
		scanf("%d", &n);
		
	}while(n < 0 && printf("n >= 0.\n"));
	
	int i = n;
	int sum = 0;
	
	while(i != 0){
		sum += i % 10;
		i /= 10;
	}
	
	printf("Tong cac chu so cua %d la: %d", n, sum);
	return 0;
}
