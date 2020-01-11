#include<stdio.h>

double cubeRoot(double n){
	double i; double precision = 0.00001;
	
	for(i=1; (i*i*i)<=n; ++i);		//Tim phan nguyen
	for(--i; (i*i*i)<n; i+= precision);		//Tim phan thap phan
	
	return i;
}

int main(){
	int n;
	printf("Nhap vao 1 so:");
	scanf("%d", &n);
	
	printf("Can bac 3 cua %d = %lf", n, cubeRoot(n));
	
	return 0;
}
