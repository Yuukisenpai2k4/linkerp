#include<stdio.h>

int main(){
	int n;
	do{
		printf("Nhap gia tri n: ");
		scanf("%d", &n);
		
	}while(n < 0 && printf("Nhap lai gia tri n: "));
	
	int i = 1;
	int count = 0;
	
	printf("Cac uoc chan cua %d: \n", n);
	while(i <= n){
		if(n % i == 0){
			if(i % 2 == 0){
				printf("%d   ", i);
				count ++;
			}
		}
		
		i++;
	}
	
	printf("\nSo luong uoc chan cua %d = %d", n, count);
	return 0;
}
