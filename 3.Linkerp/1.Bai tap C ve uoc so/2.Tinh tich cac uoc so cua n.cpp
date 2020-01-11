#include<stdio.h>

int main(){
	int n;
	do{
		printf("Nhap gia tri n: ");
		scanf("%d", &n);
		
	}while(n <= 0 && printf("Nhap lai gia tri n: "));
	
	int i = 1; 
	int p = 1;
	
	printf("In cac uoc so cua %d: \n", n);
	while(i <= n){
		if(n % i ==0){
			printf("%d\t", i);
			p = p * i;
		}
		i++;
	}
	printf("Tich cac uoc so cua %d = %d", n, p);
	return 0;
}
