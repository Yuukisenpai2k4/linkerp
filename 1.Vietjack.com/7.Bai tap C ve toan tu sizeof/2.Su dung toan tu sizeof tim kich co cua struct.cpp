#include<stdio.h>
// https://www.geeksforgeeks.org/is-sizeof-for-a-struct-equal-to-the-sum-of-sizeof-of-each-member/
struct stud{
	int i; // 4 byte
	char a[10]; // 10
	int marks; // 4 
};

int main(){
	int size ;
	struct stud s;
	size = sizeof(s);
	
	printf("Kich co cua struct la: %d", size);
	printf("%d", s.i);
	return 0;
}                                                             
