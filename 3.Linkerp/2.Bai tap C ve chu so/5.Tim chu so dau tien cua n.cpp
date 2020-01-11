#include<stdio.h>

int main(){
	int n;
	do{
		printf("Nhap n: ");
		scanf("%d", &n);
		
	}while(n < 0 && printf("n >= 0\n"));
	
	int i;
	int themang = n;
	
	
	//có the viet 
	/*do
	{                                 
		i = themang % 10;
		themang /= 10;
	}while(themang != 0);*/                
	
	
	
	do{
		i = themang % 10;
		
	}while(themang /= 10);
	
	printf("Chu so dau tien cua %d la %d", n, i);
	return 0;
}
