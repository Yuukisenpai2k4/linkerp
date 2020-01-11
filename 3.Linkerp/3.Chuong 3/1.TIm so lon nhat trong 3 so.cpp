#include<stdio.h>

int main(){
	int a, b, c;
	printf("Nhap vao 3 so a, b, c:\n");
	scanf("%d %d %d", &a, &b, &c);
	
	int max = a;
	
	if(max < b){
		max = b;
		printf("max = %d\n", max);
	}
	
	if(max < c){
		max = c;
		printf("max = %d\n", max);
	}
	
	printf("So lon nhat trong %d, %d, %d la: %d", a, b, c, max);
	return 0;
}
