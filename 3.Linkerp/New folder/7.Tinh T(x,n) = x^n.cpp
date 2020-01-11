#include <stdio.h>


int main(){
	int n;
	do{
		
		printf("\nNhap n = ");
		scanf("%d", &n);
	
	} while (n < 0 && printf("\nNhap lai: "));
	
	int x;
	printf("\nnhap vao x =");
	scanf("%d", &x);
	
	int i=1;
	int s = 1;
	while (i<= n){
		s = s*x;
		i++;
	}
	printf("\ns=%d", s);
	return 0;
}
