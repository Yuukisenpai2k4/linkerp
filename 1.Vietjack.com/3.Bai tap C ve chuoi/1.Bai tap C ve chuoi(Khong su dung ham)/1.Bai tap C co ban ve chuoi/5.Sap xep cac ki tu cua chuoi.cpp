#include<stdio.h>
#include<string.h>

int main(void){
	char s[100];
	char temp, a;
	printf("Nhap vao 1 chuoi:\n");
	scanf("%s", s);
	
	int i, j;
	int n = strlen(s);
	
	printf("Chuoi truoc khi sap xep:\n %s", s);
	
	for(i=0; i<n-1; i++){
		for(j=i+1; j<n; j++){
			if(s[i] > s[j]){
				// 1, 2
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}
		}
	}
	
	printf("\nChuoi sau khi sap xep:\n %s", s);
	return 0;
	
}
