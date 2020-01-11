#include<stdio.h>

int main(){
	int a, b;
	printf("Nhap vao hai so bat ki: ");
	scanf("%d %d", &a, &b);
	
	int *i, *n;
	int sum;
	
	i = &a;
	n = &b;
	
	sum = *i + *n;
	
	printf("%d + %d = %d", a, b, sum);
	return 0;
}
