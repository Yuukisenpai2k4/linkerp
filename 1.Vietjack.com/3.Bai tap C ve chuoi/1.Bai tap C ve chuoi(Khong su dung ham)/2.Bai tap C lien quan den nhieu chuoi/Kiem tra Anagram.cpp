#include<stdio.h>
#include<string.h>

//	Anagram: La thuat ngu de chi:
//			 hai chuoi co so ki tu va cac ki tu giong nhau.
//			 Nhung thu tu cua cac ki tu trong chuoi co the khac nhau

int main(){
	char a1[100];
	char a2[100];
	
	printf("Nhap vao lan luot chuoi a1 va a2:\n");
	scanf("%s %s", a1, a2);
	
	int n1 = strlen(a1);
	int n2 = strlen(a2);
	
	char temp;
	int i, j;
	
	//Neu hai chuoi co do dai khac nhau, thi chung khong phai anagram.
	if(n1 != n2){
		printf("Hai chuoi khong phai la anagram.\n");
		return 0;	
	}
	
	//Dau tien sap xep ca hai chuoi
	for(i=0; i<n1-1; i++){
		for(j=i+1; j<n1; j++){
			if(a1[i] > a1[j]){
				temp = a1[i];
				a1[i] = a1[j];
				a1[j] = temp;
			}
			
			if(a2[i] > a2[j]){
				temp = a2[i];
				a2[i] = a2[j];
				a2[j] = temp;
			}
		}
	}
	
	//In hai chuoi sau khi da sap xep
	printf("Chuoi a1 sau khi sap xep:\n%s\n", a1);
	printf("Chuoi a2 sau khi sap xep:\n%s\n", a2);
	
	//Sau khi sap xep xong, so sanh tung ki tu cua hai chuoi
	for(i=0; i<n1; i++){
		if(a1[i] != a2[i]){
			printf("\nHai chuoi khong phai la anagram.\n");
			return 0;
		}
		
	}
		printf("\nHai chuoi la anagram.\n");
	return 0;
}
