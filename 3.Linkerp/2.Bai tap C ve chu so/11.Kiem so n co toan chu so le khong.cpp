#include<stdio.h>

int main(){
	int n;
	do{
		printf("Nhap n: ");
		scanf("%d", &n);
		
		if(n < 0)
			printf("\nn phai >= 0. Nhap lai n: \n");
			
	}while(n < 0);
	
	int t = n;
	while (n != 0){
		int i = n % 10;
		
		if (i % 2 == 0){
			printf("%d khong toan chu so le.\n", t); 
			return 0;
		}	
		
		n /= 10;
	}
	printf(" n = %d\n", n);
	printf("%d toan la chu so le.\n", t);
	return 0;

}
