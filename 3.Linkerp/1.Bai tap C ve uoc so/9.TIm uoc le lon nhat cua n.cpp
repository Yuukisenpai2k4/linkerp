#include<stdio.h>

int main(){
	int n;
	do{
		printf("Nhap gia tri n: ");
		scanf("%d", &n);
		
	}while(n < 0 && printf("Nhap lai gia tri n: "));
	
	int i = 1;
	int max = 1;
	
	printf("Cac uoc le cua %d la : \n", n);
	while(i <= n){
		if((n % i == 0) && (i % 2 != 0)){
			if(i > max)
				max = i;
			
			printf("%d\t", i);
		}
		
		i++;
	}
	
	printf("\nUoc le lon nhat cua %d = %d", n, max);
	return 0;
}
