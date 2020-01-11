#include<stdio.h>

/*	Tam giac Floyd:
	Tam giac vuong duoc hien thi bang so tu nhien tang dan.
*/

int main(){
	int i, j, n;
	int k=1;
	
	printf("Nhap so hang:");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
		for(j=1; j<=i; j++)
			printf("%3d", k++);
		
		printf("\n");
	}
	
	return 0;
}
