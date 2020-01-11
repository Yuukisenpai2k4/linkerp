#include<stdio.h>

int main(){
	int n;
	do{
		printf("Nhap vao gia tri n: ");
		scanf("%d", &n);
		
		if(n <= 0)
			printf("n phai >= 0. Nhap lai gia tri n: \n");
			
	}while(n <= 0);
	
	
	while( n!= 0){
		int k = n % 10;
		printf("k = %d\t", k);
		
	
		n /= 10;
		printf("n = %d\t", n);
		printf("\n");
		
		if(n == 0)
			continue;
		
		if (k > n % 10){
			printf ("\nko giam dan");
			return 0;
		}
	
	}
	
	printf("\nGiam dan");
	return 0;
	
}
