#include<stdio.h>

double squareroot(double n){
	double i,  precision = 0.00001;
	for(i=1; i*i <= n; ++i);	//Tim phan nguyen
	for(--i; i*i<n; i+= precision);		//Tim phan thap phan
	
	return i;
}

int main(){
	int n;
	printf("Nhap vao 1 so:");
	scanf("%d", &n);
	
	printf("Can bac hai cua %d = %lf", n, squareroot(n));
	
	return 0;
}
