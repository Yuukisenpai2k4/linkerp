#include<stdio.h>

int main(){
	int a, b;
	do{
		printf("Nhap vao a va b: ");
		scanf("%d %d", &a, &b);
		
		if(a <= 0 && b <= 0)
			printf("a, b phai > 0. Nhap lai a va b: \n");
		
	}while(a <= 0 && b <= 0);
	
	int i = 1;
	int n;
	do{
		if(a % i == 0 && b % i == 0)
			n = i;
		printf("n = %d\t", n);
		
		i++;
		
	}while(i <= a);
	
	printf("\nUClN cua %d va %d = %d", a, b, n);
	return 0;
	
}
