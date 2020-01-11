#include<stdio.h>

int main(){
	float a, b;
	printf("Nhap vao hai so a va b: ");
	scanf("%f %f", &a, &b);
	
	if(a == 0){
		if(b == 0)
			printf("\aPhuong trinh co vo so nghiem.\n");
		else
			printf("\aPhuong trinh vo nghiem.\n");
		
	}
	
	else{
		float x = -b/a;
		printf("\aPhuong trinh co nghiem la x = %f.\n", x);
		
	}
	return 0;
}
