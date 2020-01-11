#include<stdio.h>

int main(){
	int n;
	do{
		printf("Nhap n: ");
		scanf("%d", &n);
		
	}while(n < 0 && printf("n >= 0\n"));
	
	int nghichdao = 0;
	printf("So nghich dao cua %d la: ", n);
	
	do{
		printf("%d", n % 10);
		
	}while(n /= 10); //	Tuong duong n/=10, n!=0
	
	//	Co the viet: 
	/*
		do{
			nghichdao *= 10 + n % 10;
			n /= 10;
				
	}while(n != 0);
	printf("\nSO nghich dao cua %d la %d", n, nghichdao);
	return 0;
	*/
}
