#include<stdio.h>


//	S� ho�n hao: L� s� m� t�ng c�c uoc th�t su bang ch�nh n�

int main(){
	int n;
	do{
		printf("Nhap gia tri n: ");
		scanf("%d", &n);
		
	}while(n < 0 && printf("Nhap lai gia tri n: "));
	
	int i = 1;
	int sum = 0;
	
	printf("Cac uoc so cua %d la:\n", n);
	while(i < n){
		if(n % i == 0){
			printf("%d\t", i);
			sum += i;
		}
		
		i++;
	}
	
	if(sum == n)
		printf("\n%d la so hoan hao.", n);
	else
		printf("\n%d khong phai so hoan hao.", n);
		
	return 0;
	
}
