#include<stdio.h>

int main(){
	int n;
	do{
		printf("Nhap n: ");
		scanf("%d", &n);
		
		if(n < 0)
			printf("\nn phai >= 0. Nhap lai n: \n");
			
	}while(n < 0);

	int t=n;
	int s;
	while(n!=0){
		s = n % 10;
		if(s % 2 == 1){
			printf("s = %d\n", s);
			printf("\n%d khong hoan toan la chu so chan",t);
			return 0;
		}

		else{
			n /= 10;
			
			if(n == 0){
					printf("n = %d\n", n);
						printf("\n%d hoan toan la chu so chan", t);	
			}
			
		}
	}
	
	return 0;
}
