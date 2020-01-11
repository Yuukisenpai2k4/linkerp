#include<stdio.h>

int main(){
	int n;
	do{
		printf("Nhap vao n: ");
		scanf("%d", &n);
		if(n < 0)
			printf("n phai >= 0. Nhap lai gia tri n:\n ");
			
	}while(n < 0);
	
	bool check = true;
	
	while(n /= 10){
		if((n % 10) % 2 != 0){
			check = false;
			break;
		}
	}
	
	if(check == true)
		printf("True.\n ");
	else
		printf("False.\n");
	
	return 0;
}
