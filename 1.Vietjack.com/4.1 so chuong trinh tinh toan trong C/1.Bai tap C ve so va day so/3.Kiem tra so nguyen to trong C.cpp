#include<stdio.h>

//	So nguyen to: chi chia het cho 1 va chinh no.
//	Vi du: 1, 2, 3, 5, 7,....

int main(){
	int i, n;
	printf("Nhap vao 1 so de kiem tra: ");
	scanf("%d", &n);
	
	
	for(i=2; i<=n; i++){
		if(n % i == 0)
			break;
	}
	
	if( i == n)
		printf("%d la so nguyen to.\n", n);
	else
		printf("%d khong phai la so nguyen to.\n", n);
	
	return 0;
}
