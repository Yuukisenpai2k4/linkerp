#include<stdio.h>

int main(){
	int n;
	
	do{
		printf("Nhap n: ");
		scanf("%d", &n);
		
	}while(n <= 0 && printf("n >= 0. Nhap lai gia tri n: "));
	
	int i = 1;
	
	printf("Tat ca cac uoc so cua n la: \n");
	
	while(i <= n){
		if(n % i == 0)
			printf("%d\t", i);
		i++;
	}
	
	return 0;
}
