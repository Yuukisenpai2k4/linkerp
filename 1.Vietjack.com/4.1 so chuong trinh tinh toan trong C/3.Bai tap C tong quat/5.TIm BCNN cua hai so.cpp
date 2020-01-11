#include<stdio.h>

int main(){
	//	BCNN: cua hai so a, bla 1 so nguyen duong nho nhat chia het cho a va b
	//	VD: BCNN cua 4 va 3 la 12
	int a, b;
	do{	
		printf("Nhap vao hai so a va b: ");
		scanf("%d %d", &a, &b);
		
		if(a <= 0 && b <= 0)
			printf("a, b phai >= 0. Nhap lai gia tri a, b:\n");
		
	}while(a <= 0 && b <= 0);

	
	int i, j;
	int n = 0;
	
	if(a > b){
		i = j = a;
		printf("i = %d\n", i);
	}
		
	else{
		i = j = b;
		printf("i = %d\n", i);
	}
		
	while(1){
		if(i % a == 0 && i % b == 0){
			n = i;
			printf("n = %d\n\n\n", n);
			break;
		}
		
		i += j;
		printf("i = %d\t\n", i);
	}
	
	printf("\nBCNN cua %d va %d = %d", a, b, n);
	return 0;
}
