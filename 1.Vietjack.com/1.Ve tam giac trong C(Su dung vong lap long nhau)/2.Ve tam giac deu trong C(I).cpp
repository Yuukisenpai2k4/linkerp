#include<stdio.h>

/*	1 dinh: duoi man hinh
	Canh doi dien: nam tren
*/

int main(){
	int i, j, n;
	printf("Nhap so hang: ");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
		for(j=1; j<i; j++)
			printf(" ");
			
		for(j=i; j<=n; j++)
			printf("* ");
		
		printf("\n");
	}
	
	return 0;
}
