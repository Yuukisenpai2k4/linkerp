#include<stdio.h>
#include<math.h>


int main(){
	long n;
	do{
		printf("Nhap n: ");
		scanf("%ld", &n);
		
	}while(n < 0 && printf("n >= 0.\n"));
	
	long i = n;
	int count = 0;
	
	if(n == 0)
		count = 1;
	
	
	while(i != 0){
		count += 1;
		i /= 10;
	}
	
	printf("So chu so cua %ld la: %d", n, count);
	return 0;
	
}
