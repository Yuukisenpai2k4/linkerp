#include<stdio.h>

int main(){
	int a, b;
	do{
		printf("Nhap vao hai so a va b: ");
		scanf("%d %d", &a, &b);
		
		if(a <= 0 && b <= 0)
			printf("a, b phai >= 0. Nhap lai:\n");
		
	}while(a <= 0 && b <= 0);
	
	int max = a > b ? a : b;
		printf("max = %d\n", max);
	int min = a < b ? a : b;
		printf("min = %d\n", min);
	
	int i;
	if(a == b)
		return a;
	else{
		for(i =  1; i < a*b; i++)
			if(i % a == 0 && i % b == 0)
				return i;
	}
	
	printf("BCNN cua %d va %d la: %d", a, b, i);
	return 0;
}
