#include<stdio.h>

//	Giai thua cua 1 so n: tich tu 1 toi n

int main(){
	int i, n;
	int j = 1;
	printf("Nhap vao 1 so: ");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
		j = j * i;
	} 
	
	printf("Giai thua cua %d = %d", n, j);
	return 0;
}
