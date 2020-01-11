#include<stdio.h>
#include<string.h>

int main(){
	char a1[100];
	char a2[100];
	
	printf("Nhap vao hai chuoi a1 va a2:\n");
	scanf("%s %s            ", a1, a2);
	
	int i, n1, n2;
	int j = 0;
	n1 = strlen(a1);
	n2 = strlen(a2);
	
	for(i = n1; i<=n1+n2; i++){
		a1[i] = a2[j];
		j++;
	}
	
	a1[i] = '\0';
	
	printf("Ket qua sau khi noi chuoi la:\n\a%s", a1);
	return 0;
}
