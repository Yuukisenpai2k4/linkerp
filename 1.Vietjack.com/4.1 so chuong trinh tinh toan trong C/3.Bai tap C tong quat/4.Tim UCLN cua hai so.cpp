#include<stdio.h>

//	UCLN: so nguyen duong lon nhat chia het cho moi so do.
//	VD: UCLN cua 6 va 15: 3. 
int main(){
	int a, b;
	do{
		printf("Nhap vao hai so a va b:");
		scanf("%d %d", &a, &b);
		
		if(a && b <= 0)
			printf("a, b phai >= 0. Nhap lai a va b:\n ");
		
	}while(a && b <= 0);

	int j = a / 2;
		printf("j = %d\n", j);
	int k = b / 2;
		printf("k = %d\n", k);
		
	int i, n;
	for(i=1; i<j && i<k; i++){
		
		if(a % i == 0 && b % i ==0)
			n = i;
	}
	
	printf("\nUCLN cua %d va %d = %d", a, b, n);
	return 0;
	
}
