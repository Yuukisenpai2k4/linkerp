#include<stdio.h>
#include<string.h>

int main(){
	char a[20][20], b[20];
	int i, j, n;
	
	printf("NHap vao so chuoi: \n");
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		printf("Chuoi - %d: ", i);
		scanf("%s", a[i]);
	}
	
	for(i=1; i<=n; i++){
		for(j=i+1; j<=n; j++){
			if(strcmp(a[i], a[j]) > 0){
				strcpy(b, a[i]);
				strcpy(a[i], a[j]);
				strcpy(a[j], b);
			}
		}
	}
	
	printf("Sap xep thu tu cua cac chuoi: \n");
	for(i=1; i<=n; i++){
		printf("Chuoi - %d: ", i);
		printf("%s\n", a[i]);
	}
	
	return 0;
}
