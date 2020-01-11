#include <stdio.h>
int main(){
	
	int n;
	do{
		printf("Nhap n: ");
		scanf("%d", &n);
		
		if(n <= 0)
			printf("n phai > 0. Nhap lai n:\n");
			
	}while(n <= 0);
	
	int i = n;
	int max = n % 10;
		printf("max = %d.\n", max);
	
	while (n != 0){
		
		int k = n % 10;
			printf("k = %d.\n", k);
		n /= 10;

		if (k < n % 10){	// Hoac k > max;
			printf("%d khong tang dan tu trai qua phai.\n", i);
			return 0;
		}
	
	}
	
	printf("%d tang dan tu trai qua phai.\n", i);
	return 0;
	}





