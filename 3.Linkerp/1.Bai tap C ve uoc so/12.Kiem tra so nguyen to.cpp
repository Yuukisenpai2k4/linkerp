#include<stdio.h>

int main(){
	int n;
	do{
		printf("nhap n: ");
		scanf("%d", &n);
		
		if(n < 2)
			printf("n > 2. Nhap lai gia tri n: \n");
		
	}while(n < 2);
	
	int i;
	
	for(i=2; i<n; i++){
		if(n % i == 0)
			break;
	}
	
	if(i == n)
		printf("\n%d la so nguyen to.", n);
	else
		printf("\n%d khong phai so nguyen to.", n);
		
	return 0;
}
