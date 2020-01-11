#include<stdio.h>

int day_Fibonacci(int i){
	if(i == 0)
		return 0;
	if(i == 1)
		return 1;
	
	return day_Fibonacci(i-1) + day_Fibonacci(i-2);
}

int main(){
	int  n;
	printf("Nhap so luong phan tu: ");
	scanf("%d", &n);
	
	printf("In day Fibonacci:\n ");
	int i;
	for(i=1; i<=n; i++)
		printf("%d\t", day_Fibonacci(i));
	
	return 0;
}
