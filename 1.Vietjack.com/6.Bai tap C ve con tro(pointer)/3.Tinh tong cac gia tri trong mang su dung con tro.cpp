#include<stdio.h>
#include<conio.h>

int main(){
	int a[100];
	int i;
	int n;
	printf("Nhap so luong phan tu co trong mang: ");
	scanf("%d", &n);
	printf("Nhap %d phan tu:\n", n);
	for(i=0; i<n; i++){
		printf("Phan tu - %d: ", i);
		scanf("%d", &a[i]);
	}
	
	int *str;
	str = a; //	a = &a[0]
	
	int sum = 0;
	for(i=0; i<n; i++){
		sum = sum + *str;
		str ++;
	}
	
	printf("Tong cac %d phan tu cua mang la: %d", n, sum);
	return 0;
}
