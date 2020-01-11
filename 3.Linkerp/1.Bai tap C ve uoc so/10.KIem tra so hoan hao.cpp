#include<stdio.h>


//	Sô hoàn hao: Là sô mà tông các uoc thât su bang chính nó

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
