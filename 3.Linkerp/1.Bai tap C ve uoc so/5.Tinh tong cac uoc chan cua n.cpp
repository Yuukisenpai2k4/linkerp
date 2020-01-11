#include<stdio.h>

int main(){
	int n;
	do{
		printf("Nhap gia tri n: ");
		scanf("%d", &n);
		
	}while(n < 0 && printf("Nhap lai gia tri n: "));
	
	int i = 1;
	int sum = 0;
	
	printf("Cac uoc so chan cua %d la: \n", n);
	while(i <= n){
		if(n % i == 0){
			if(i % 2 == 0)
				printf("%d   ", i);
				sum = sum + i;
		}
		
		i++;
	}
	
	printf("Tong cac uoc chan cua %d = %d", n, sum);
	return 0;
}
