#include<stdio.h>

int main(){
	int a, b;
	do{
		printf("Nhap vao hai so a va b: ");
		scanf("%d %d", &a, &b);
		
		if(a <= 0 && b <= 0)
			printf("a, b phai >= 0. Nhap lai:\n");
		
	}while(a <= 0 && b <= 0);
	
	int i = a;
	int j = b;
	
	while(a != b){
		
		if(a > b){
			a -= b;
			printf("a = %d\t", a);
			
		}
			
		else{
			b -= a;
			printf("b = %d\t", b);
		}		
		
	}
	
	printf("\nUCLN cua %d va %d = %d", i, j, a);
	return 0;
}
