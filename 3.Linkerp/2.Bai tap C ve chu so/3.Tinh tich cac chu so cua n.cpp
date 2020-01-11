#include<stdio.h>

int main(){
	int n;
	do{
		printf("Nhap n: ");
		scanf("%d", &n);
		
	}while(n < 0 && printf("n >= 0\n"));
	
	int p = 1;
	int i = n;
	
	while(i != 0){
		p *= i % 10;
		i /= 10;
	}
	
	printf("Tich cac chu so cua %d la %d", n, p);
	return 0;
}
