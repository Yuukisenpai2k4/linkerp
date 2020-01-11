#include<stdio.h>

int main(){
	
	int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int loop;
	
	printf("In cac phan tu cua mang: \n");
	for(loop =0; loop<=10; loop++)
		printf("%d ", a[loop]);
		
	return 0;
	
}
