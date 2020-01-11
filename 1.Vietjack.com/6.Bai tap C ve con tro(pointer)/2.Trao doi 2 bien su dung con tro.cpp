#include<stdio.h>

//	Viet 1 ham de trao doi hai gia tri
void swap(int *x, int *y){
	int temp;
	temp = *x;
	*y = *x;
	*y = temp;
}

int main(){
	int a, b;
	printf("Nhap vao hai so bat ki: ");
	scanf("%d %d", &a, &b);
	
	printf("Truoc khi trao doi:\na = %d, b = %d.\n", a, b);
	
	swap(&a, &b);
	
	printf("Sau khi trao doi:\na = %d, b = %d.\n", a, b);  
	return 0;
}
