#include<stdio.h>

// 	Day Fibonacci: 
//	So ke tiep bang tong cua hai so lien truoc
//	Fn = Fn-1 + Fn-2
// VD: F8 = 0 1 1 2 3 5 8 13 || F8 = 1 1 2 3 5 8 13 21

int main(){
	int n;
	printf("Nhap vao 1 so: ");
	scanf("%d", &n);
	
	int a, b, c;
	a = b = 1;
	
	printf("In day fibonacci: \n");
	printf("%d %d ", a, b);
	
	
	for(int i=1; i<=n-2; i++){
		c = a + b;
		printf("%d ", c);
		
		a = b; 
		b = c;
	}
	
	return 0;
}
