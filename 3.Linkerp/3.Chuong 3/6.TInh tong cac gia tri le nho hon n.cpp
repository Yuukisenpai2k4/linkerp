#include<stdio.h>

int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	int sum = 0;
	int i;
	for(i=1; i<n; i++){
		sum += i;
		i += 2;
		if(i >= n)
			break;
		
	}
	
	printf("Tong cac so le nho hon n la: %d", sum);
	return 0;
}
