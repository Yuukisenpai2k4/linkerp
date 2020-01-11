#include<stdio.h>

int main(){
	char a[100];
	char i = 0;
	
	printf("NHap vao 1 chuoi:\n");
	scanf("%s", &a[i]);
	
	int nguyen_am = 0;
	int phu_am = 0;
	
	while(a[i] != '\0'){
		if(a[i] == 'u' || a[i] == 'e' || a[i] == 'o' || a[i] == 'a' || a[i] == 'i'){
			i++;
			nguyen_am ++;
		}
			
		else{
			i++;
			phu_am ++;
		}
		
	}
	
	printf("Chuoi %s co %d nguyen am va %d phu am", a, nguyen_am, phu_am);
	
	return 0;
}
