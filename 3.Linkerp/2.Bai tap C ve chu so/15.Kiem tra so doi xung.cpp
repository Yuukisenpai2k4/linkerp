#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
	int n;
	do{
		printf("Nhap n: ");
		scanf("%d", &n);
		if(n <= 0)
			printf("n phai >= 0.Nhap lai gia tri n:\n");
			
	}while(n <= 0);
	
	int SoChuSo = (int)log10((float)n) + 1;
	int SoNghichDao = 0;
	int themang = n;

	printf("\nSo %d co phai la so doi xung hay khong ?\n", n);
	while (themang != 0)
	{
		int ChuSo = themang % 10;
		themang /= 10; 
		SoNghichDao += ChuSo * pow(10.0, --SoChuSo);
	}
	
	/*while(themang != 0)
	{
		SoNghichDao = SoNghichDao * 10 + themang % 10;
		themang /= 10;
	}*/
	
	if(SoNghichDao == n)
	{
		printf("Dung !");
	}
	else
	{
		printf("Sai !");
	}

	return 0;
}
