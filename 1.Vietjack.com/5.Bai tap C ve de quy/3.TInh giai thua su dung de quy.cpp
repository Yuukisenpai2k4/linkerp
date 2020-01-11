#include<stdio.h>

int tinhgiaithua(unsigned int i){
	if(i <= 1)
		return 1;
	
	return i * tinhgiaithua(i - 1);
}

int main(){
	int i;
	printf("Nhap 1 so bat ki: ");
	scanf("%d", &i);
	
	printf("Giai thua cua %d la: %d.\n ", i, tinhgiaithua(i));
	return 0;
}


