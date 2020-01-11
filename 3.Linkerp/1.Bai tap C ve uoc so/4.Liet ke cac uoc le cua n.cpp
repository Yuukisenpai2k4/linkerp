#include<stdio.h>

int main(){
	int n;
	do{
		printf("Nhap gia tri n: ");
		scanf("%d", &n);
		
	}while(n < 0 && printf("n > 0. Nhap lai gia tri n: "));
	
	int i = 1;
	printf("Cac uoc so le cua %d la: \n", n);
	while(i <= n){
		if(n % i == 0){
			if(i % 2 != 0){
				printf("%d   ", i);
			}
		}
		
		i++;
	}
	
	return 0;
}
