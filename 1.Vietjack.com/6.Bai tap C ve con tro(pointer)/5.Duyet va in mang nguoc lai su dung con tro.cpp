#include<stdio.h>
#include<conio.h>

int main(){
	int a[100];
	int n;
	int *ptr;
	
	ptr = &a[0];
	
	printf("Nhap so phan tu co torng mang: ");
	scanf("%d", &n);
	
	int i;
	for(i=0; i<n; i++){
		printf("Phan tu 0 - %d: ", i);
		scanf("%d", &a[i]);
	}
	
	ptr = &a[n - 1];
	
	printf("In mang theo chieu nguoc lai: ");
	
	for(i=n-1; i>=0; i--){
		printf("\nphan tu %d = %d", i, *ptr);
		ptr--;
	}
	
	return 0;
	
}


