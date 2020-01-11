#include<stdio.h>

int main(){
	float a, b;
	printf("Nhap vao 2 so thuc a va b: ");
	scanf("%f %f", &a, &b);
	
	if(a * b > 0)
		printf("\a%f va %f cung dau.\n", a, b);
	else
		printf("\a%f va %f khac dau.\n", a, b);
		
	return 0;
}
