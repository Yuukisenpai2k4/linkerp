#include<stdio.h>
#include<conio.h>


int string(char*);

int main(){
	char a[100];
	printf("Nhap vao 1 chuoi: \n");
	gets(a);
	
	int length;
	length = string(a);
	
	printf("Do dai cua chuoi:\n%s.	La: %d", a, length);
	return 0;	
}

int string(char *p){	//	p = a[0]
	int count = 0;
	while(*p != '\0'){
		count ++;
		p++;
	}
	
	return count;
}
