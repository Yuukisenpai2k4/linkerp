#include<stdio.h>

int main(){
	int n;
	do{
		printf("Nhap n = ");
		scanf("%d", &n);
		if(n < 0)
			printf("n >= 0.Nhap lai n:\n ");
			
	}while(n < 0);
	
	printf("So %d gom toan cac chu so le hay khong?\n", n);
	bool check = true;
	while(n /= 10){
		if((n % 10) % 2 == 0){
			check = false;
			break;
		}
	}
	
	if(check == true)
		printf("True.\n");
	else
		printf("False.\n");
		
	return 0;
}
