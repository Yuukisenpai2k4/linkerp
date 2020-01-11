#include<stdio.h>
#include<string.h>

int main(){
	char a1[100];
   char a2[100];
   
   printf("Nhap vao 1 chuoi:\n");
   gets(a1);
   printf("Nhap vao 1 tu can tim kiem:\n");
   gets(a2);
	
	
	int n = 0;
	int m = 0;
	int count = 0;
	int len = strlen(a2);	//Bien luu giu do dai cua chuoi tim kiem
	// luu
	while(a1[n] != '\0'){
		
		if(a1[n] == a2[m]){	//Neu ki tu dau tien giong nhau
		
			//Tiep tuc tim kiem
		
			while(a1[n] == a2[m] && a1[n] != '\0'){
				n++;
				m++;
			}
	
			//Neu day ki tu nay co do dai bang chuoi tim kiem
			// chuoi
			if(m == len && ( a1[n] == ' ' || a1[n] == '\0')){
				//Da tim ra chuoi can tim
				count ++;
			}
		}
		
		else{	//Neu ki tu dau tien khong giong nhau
			while(a1[n] != ' '){	// Duyet het tu tim kiem. 
				n++;
				if(a1[n] != '\0')
					break;
			}
		}
		n++;
		m = 0;	//Reset bien dem
	
	}
	
	if(count > 0)
		printf("Chuoi '%s' xuat hien %d lan.\n", a2, count);
	else
		printf("Chuoi '%s' khong co mat trong cau.\n", a2);
		
	return 0;

}
