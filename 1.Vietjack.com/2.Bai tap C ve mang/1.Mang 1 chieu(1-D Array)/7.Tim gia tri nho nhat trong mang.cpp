#include<stdio.h>

int main(){
	int a[100] = {1, 2, 4, 5, 546, 3,56 , 25, 34,5 };
	int i, min;
	
	min = a[0];
	printf("Chuong trinh in gia tri nho nhat cua mang: \n");
	for(i=0; i<10; i++){
		if(min > a[i])
			min = a[i];
	}
	
	printf("Gia tri nho nhat cua mang: %d", min);
	return 0;
}
