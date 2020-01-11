#include<stdio.h>

int main(){
	int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	int i;
	float avg;
	int sum = 0;
	
	printf("Gia tri trung binh cac phan tu cua mang: ");
	for(i=0; i<=9; i++)
		sum = sum + a[i];
		
	avg = float(sum) / i;
	printf("%2f", avg);
	return 0;
}
