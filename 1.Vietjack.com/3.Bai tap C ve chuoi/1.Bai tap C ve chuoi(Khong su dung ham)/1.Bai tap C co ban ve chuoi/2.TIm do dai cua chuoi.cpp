#include<stdio.h>

int main(){
	int i = 0;
	char s[100];
	
	printf("Nhap chuoi ban muon tim do dai: \n");
	scanf("%s", &s[i]);
	
	while(s[i] != '\0')
		i++;
	
	printf("Do dai cua chuoi:\n%s la: %d ", sc, i);
	return 0;
}
