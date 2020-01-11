#include<stdio.h>
int main(){
	int n;
	printf("Nhap gia tri toi da cua chuoi: ");
	scanf("%d", &n);
	
	int i = 1;
	int sum = 0;
	
	while( i <= n){
		sum = sum + i;
		i++;
	}
	
	printf("Tong cua 1 + 2 + ... + %d = %d.\n", n, sum);
	return 0;
}
