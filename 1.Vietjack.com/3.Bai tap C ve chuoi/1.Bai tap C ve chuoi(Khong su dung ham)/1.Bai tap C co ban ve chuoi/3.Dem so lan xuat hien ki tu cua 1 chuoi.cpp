#include<stdio.h>

int main(){
	char a[100];
	char j;
	int i = 0;
	
	printf("Nhap vao 1 chuoi: \n");
	gets(a);
	printf("Nhap ki tu ban muon dem: ");
	scanf("%c", &j);
	
	// 123124124 '\0'
	int count = 0;
	while(a[i] != '\0'){
		if(a[i] == j)
			count++;
		
		i++;
	}
	
	if(count > 0){
		if(count == 1)
			printf("\nKi tu %c xuat hien %d lan.\n Trong chuoi %s", j, count, a);
		else
			printf("\nKi tu %c xuat hien %d lan.\n Trong chuoi %s", j, count, a);
	}
	else
		printf("\nKi tu %c khong xuat hien trong chuoi %s", j, a);
		
	return 0;
}
