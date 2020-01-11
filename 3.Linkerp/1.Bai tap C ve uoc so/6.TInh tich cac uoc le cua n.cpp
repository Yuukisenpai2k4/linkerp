#include<stdio.h>

int main(){
	int n;
	do{
		printf("Nhap gia tri n: ");
		scanf("%d", &n);
		
	}while(n <= 0 && printf("n > 0. Nhap lai gia tri n: "));
	
	int i = 1;
	int p = 1;
	
	printf("Cac uoc le cua %d la: \n", n);
	while(i <= n){
		if(n % i == 0){
			if(i % 2 != 0){
				printf("%d    ", i);
				p = p * i;
			}
		}
		
		i ++;
	}
	
	printf("\nTich cac uoc le cua %d = %d", n, p);
	return 0;
}
