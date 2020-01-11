#include<stdio.h>

int main(){
	float a = 3.14, *ptr;
	ptr = &a;
	
	printf("Kich co cua con tro float la: %d", sizeof(ptr));
	
	return 0;
}
