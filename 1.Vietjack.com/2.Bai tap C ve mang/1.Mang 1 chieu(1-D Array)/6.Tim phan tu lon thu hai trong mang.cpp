#include<stdio.h>

int main(){
	int a[10] = {1, 2, 3, 4, 5, 34, 23, 6, 7, 10};
	int i, max, two;
	
	if(a[0] > a[1]){
		max = a[0];
		two = a[1];
	}
	else{
		max = a[1];
		two = a[0];
	}
	
	printf("Chuong trinh on gia tri lon thu hai cua mang: \n\n");
	for(i=2; i<10; i++){
		if(max < a[i]){
			two = max;
			max = a[i];
		}
		else{
			two = a[i];
		}
	}
	printf("Gia tri lon nhat cua mang la: %d\n", max);
	printf("Gia tri lon thu hai cua mang la: %d\n", two);
	return 0;
}
