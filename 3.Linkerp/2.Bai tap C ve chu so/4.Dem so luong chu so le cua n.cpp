#include<stdio.h>

int main(){
	int n;
	do{
		printf("Nhap n: ");
		scanf("%d", &n);
		
	}while(n < 0 && printf("n >= 0\n"));
	
	int i = n;
	int count = 0;
	
	if(n == 0)
		count = 1;
		
	while(i != 0){
		if(i % 2 != 0)
			count += 1;
		
		i /= 10;
	}
	
	printf("So luong chu so le cua %d la: %d", n, count);
	return 0;
}
