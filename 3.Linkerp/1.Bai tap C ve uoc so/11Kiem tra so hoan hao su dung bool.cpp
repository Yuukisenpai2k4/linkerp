#include<stdio.h>

bool check(int n){
	int sum = 0;
	for(int i=1; i<=n/2; i++){
		if(n % i == 0)
			sum += i;
	}
	
	if(sum == n)
		return true;
	else 
		return false;
}

int main(){
	int n;
	do{ 
		printf("Nhap vao gia tri n:");
		scanf("%d", &n);
		
		if(n <= 0)
			printf("Nhap lai gia tri n: ");
	}while(n <= 0);
	
	printf("Cac uoc cua %d: \n", n);
	for(int i=1; i<=n; i++){
		if(n % i == 0)
			printf("%d\t", i);
	}
	
	if(check(n))
		printf("\n%d la so hoan hao.", n);
	else
		printf("%d khong phai la so hoan hao.", n);
		
	return 0;

}
