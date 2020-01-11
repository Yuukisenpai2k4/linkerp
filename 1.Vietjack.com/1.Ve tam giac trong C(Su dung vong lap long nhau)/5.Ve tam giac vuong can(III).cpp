#include<stdio.h>

//	1 canh goc vuong : Trai man hinh
//Canh con lai: Phia tren man hinh


int main(){
	int i, j, n;
	printf("Nhap so hang:");
	scanf("%d", &n);
	
	for(i=n; i>=1; i--){
		for(j=1; j<=i; j++)
			printf("* ");
			
		printf("\n");
	}	
	
	return 0;
}
