#include<stdio.h>

int main(){
	int a[10] = {1, 2, 3, 4, 5, 6, 7, 7, 8, 10};
	int i, max;
	
	max = a[0];
	
	printf("Chuong trinh in phan tu lon nhat cua mang: ");
	for(i=0; i<=9; i++)
		if(max < a[i])
			max = a[i];
			
	printf("\n\aGia tri lon nhat cua mang la: %d", max);
	return 0;
}
