#include<stdio.h>


int main(){
	int n; 
	do{
		printf(" nhap vao n = ");
		scanf("%d", &n);
		if(n <= 0)
			printf("n phai >= 0. Nhap lai gia tri n:\n");
		
	}while(n <= 0);
	
	int i = 1;
	int D, K = 0;
	int N = n;
	
	while( N != 0){
		
		D = N % 10;
		
		printf("%d\n", N);
		
		N /= 10;
		printf("%d\n", N);
		
		K = K*10 + D;
		printf("%d\n", K);
		i++;
	
	}	
	
	
	printf("\n");
	if ( K == n)	
		printf(" n la so doi xung ");
	
	else
		printf(" n khong phai la so doi xung ");
		
	printf(" K = %d ", K);
	
	return 0;
	}
