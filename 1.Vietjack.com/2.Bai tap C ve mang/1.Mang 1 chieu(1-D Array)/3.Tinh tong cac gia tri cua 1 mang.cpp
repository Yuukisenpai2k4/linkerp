#include<stdio.h>

int main(){
	int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int sum = 0; 
	int i;
	
	printf("Tong cac phan tu cua 1 mang: \n");
	for(i=0; i<=9; i++)
		sum = sum +a[i];
	
	printf("%d", sum);
	return 0;
}
