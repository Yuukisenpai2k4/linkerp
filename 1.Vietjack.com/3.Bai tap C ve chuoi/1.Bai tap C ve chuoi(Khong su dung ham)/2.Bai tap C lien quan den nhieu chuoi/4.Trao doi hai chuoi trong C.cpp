#include<stdio.h>

int  main(){
	char a1[100];
	char a2[100];
	
	printf("Nhap vao lan luot chuoi a1 va a2: \n");
	scanf("%s %s", a1, a2);
	
	char temp;
	int i = 0;
	
	printf("Truoc khi trao doi: \n");
	printf("Chuoi a1: %s.\n", a1);
	printf("Chuoi a2: %s.\n", a2);
	
	while(a1[i] != '\0'){
		temp = a1[i];
		a1[i] = a2[i];
		a2[i] = temp;
		i++;
	}
	
	printf("Sau khi trao doi: \n");
	printf("Chuoi a1: %s.\n", a1);
	printf("Chuoi a2: %s.\n", a2);
	
	return 0;
}
