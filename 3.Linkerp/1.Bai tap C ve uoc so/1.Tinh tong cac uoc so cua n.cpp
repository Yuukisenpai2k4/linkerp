#include<stdio.h>


int main(){
	int n;
	
	do{
		printf("Nhap n: ");
		scanf("%d", &n);
		if(n <= 0)
			printf("Nhap lai gia tri n: ");
		
	}while(n <= 0);
	
	// 1 && 1 = 1
	// 0 && ? = 0
	int i = 1;
	int sum = 0;
	
	printf("In cac uoc cua %d: \n", n);
	while(i <= n){
		if(n % i == 0){
	
			printf("%d\t", i);
			sum = sum +i;
		}
		i++;
	}
	
	printf("Tong cac uoc cua %d = %d: ", n, sum);
	return 0;
}
