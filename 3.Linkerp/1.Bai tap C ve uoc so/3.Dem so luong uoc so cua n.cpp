#include<stdio.h>

int main(){
	int n;
	do{
		printf("Nhap gia tri n: ");
		scanf("%d", &n);
		
	}while(n < 0 && printf("n > 0. Nhap lai gia tri n: "));
	
	int i = 1;
	int count = 0;
	
	printf("Cac uoc so cua %d la: \n", n);
	while(i <= n){
		if(n % i == 0){
			printf("%d  ", i);
			count ++;
		}
		
		i++;
	}
	
	printf("\nSo luong uoc so cua %d = %d", n, count);
	return 0;
}
