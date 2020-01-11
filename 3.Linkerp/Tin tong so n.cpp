#include<stdio.h>

int main(){
	int a;
	printf("Nhap a: ");
	scanf("%d", &a);
	
	int i;
	int sum = 0;
	
	for(i=1; i<=a; i++){
		sum += i;
		printf("sum = %d\t", sum);
		
	}
	printf("\nsum = %d", sum);
	return 0;
}
