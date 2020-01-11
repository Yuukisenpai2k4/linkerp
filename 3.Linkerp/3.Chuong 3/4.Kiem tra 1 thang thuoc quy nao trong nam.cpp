#include<stdio.h>

int main(){
	
	int thang;
	do{
		printf("Nhap thang: ");
			scanf("%d", &thang);
			
	}while(thang > 12 );

	
	switch(thang){
		case 1:
		case 2:
		case 3:
			printf("\aThang %d thuoc quy 1.\n", thang);
			break;
		
		case 4:
		case 5:
		case 6:
			printf("\aThang %d thuoc quy 2.\n", thang);
			break;
		
		case 7:
		case 8:
		case 9:
			printf("\aThang %d thuoc quy 3.\n", thang);
			break;
			
		case 10:
		case 11:
		case 12:
			printf("\aThang %d thuoc quy 4.\n", thang);
			break;
	}
	
	return 0;
}
