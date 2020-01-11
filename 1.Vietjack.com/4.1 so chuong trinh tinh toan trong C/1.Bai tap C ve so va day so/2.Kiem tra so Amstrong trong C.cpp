#include<stdio.h>


//	So Amstrong: la so co gia tri bang tong lap phuong cac chu so cua so do
//	153 = (1)3 + (5)3 + (3)3

int main(){
	int a;
	printf("Nhap vao 1so de kiem tra:");
	scanf("%d", &a);
	
	int check, i;
	int sum = 0;
	
	check = a;
	while(check != 0){
		i = check % 10;
		sum = sum + (i*i*i);
		check = check / 10;
	}
	
	if(sum == a)
		printf("%d la 1 so Amstrong.\n", a);
	else
		printf("%d  khong phai la 1 so Amstrong.\n", a);
	
	return 0;
}
