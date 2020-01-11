#include<stdio.h>

// Canh huyen nam phia trai man hinh

int main (){
	int i, j, n;
	printf("Nhap so hang: ");
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		for(j=0; j<i; j++)
			printf("  ");
		
		for(j=i; j<n; j++)
			printf(" *");
		printf("\n");
	}
	
	return 0;
}
