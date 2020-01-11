#include<stdio.h>

//Xem hai chuoi co giong nhau hay khong.

int main(){
	char a1[100];
	char a2[100];
	
	printf("Nhap vao hai chuoi a1 va a2:\n");
	scanf("%s %s", a1, a2);
	
	int n = 0;
	unsigned short flag = 1;
	
	while(a1[n] != '\0'){
		if(a1[n] != a2[n]){
			flag = 0;
			break;
		}
		
		n++;
	}	
	
	if(flag == 1)
		printf("Chuoi a1 va a2 la giong nhau.\n");
	else
		printf("chuoi a1 va a2 la khac nhau.\n");
		
	return 0;
}
