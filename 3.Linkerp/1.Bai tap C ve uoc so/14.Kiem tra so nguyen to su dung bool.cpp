#include<stdio.h>

bool nguyento(int n){
	if(n<2)
		return false;
	for(int i = 2; i<n; i++){
		if(n % i == 0)
			return false;
	}
	
	return true;
}

int main(){
	int n;
	printf("Nhap vao gia tri n: ");
	scanf("%d", &n);
	
	if(nguyento(n))
		printf("\n%d la so nguyen to.", n);
	else
		printf("\n%d khong phai so nguyen to.", n);
		
	return 0;
}
