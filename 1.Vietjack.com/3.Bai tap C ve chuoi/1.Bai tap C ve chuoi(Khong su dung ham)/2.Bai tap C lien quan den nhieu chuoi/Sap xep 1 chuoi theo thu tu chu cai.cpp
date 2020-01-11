#include<stdio.h>
#include<string.h>

int main(){
	char a[100];
	printf("Nhap vao 1 chuoi: \n");
	scanf("%s", a);
	
	int n = strlen(a);
	int i, j;
	char temp;
	for(i=0; i<n-1; i++){
		for(j=i+1; j<n; j++){
			if(a[i] > a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;	
			}
		}
	}
	
	printf("Chuoi sau khi sap xep:\n%s", a);
	return 0;
}
