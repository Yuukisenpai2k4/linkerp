#include<stdio.h>


typedef struct XYZ {
   int *ptr;
   double a;
   unsigned char ch;
} x;
 // struct XYZ tuong duong x
int main() {
   x  *ptr = (XYZ *) 1000;
   printf("Kich co cua con tro toi struct la: %d", sizeof(ptr));
   return 0;
}
