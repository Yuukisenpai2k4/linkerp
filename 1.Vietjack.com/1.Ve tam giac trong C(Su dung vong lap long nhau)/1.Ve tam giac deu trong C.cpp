#include<stdio.h>

int main(){
	int n, j, i;
	printf("Nhap so hang: ");
	scanf("%d", &n);
	
	printf("Ve tam giac sao deu:\n\n ");
	for(i=0; i<=n; i++){
		for(j=1; j<=n-i; j++)
			printf(" ");
			
		for(j=1; j<=i; j++)
			printf("* ");
			
		printf("\n");
	}
	
	return 1;
}
