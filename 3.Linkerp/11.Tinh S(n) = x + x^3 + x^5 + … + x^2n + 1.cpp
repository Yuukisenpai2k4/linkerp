#include<stdio.h>
#include<math.h>
int main(){
	int x;
	int n;
	do{
		printf("Nhap x: ");
		scanf("%d", &x);
		printf("Nhap n: ");
		scanf("%d", &n);
		
	}while(n < 1 && printf("n >= 1. Nhap lai n: "));
	
	int p = 1;
	int sum = 0;
	int i = 0;
	
	//su dung ham pow: 
	
	while(i < n){
		p = pow(x, (2 * i + 1));
		sum = sum + p;
		i++;
	}
	
	printf("Tong = %d\n", sum);
	return 0;
}
