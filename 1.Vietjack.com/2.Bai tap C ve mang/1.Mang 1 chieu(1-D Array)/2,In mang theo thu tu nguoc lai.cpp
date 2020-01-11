#include<stdio.h>

int main(){
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int i;
	
	printf("In mang the chieu dao nguoc: ");
	for(i=9; i>=0; i--)
		printf("\a%d ", a[i]);
		
	return 0;
}
