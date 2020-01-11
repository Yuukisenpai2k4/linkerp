#include<stdio.h>
#include<conio.h>

/*	Ma phuong (Magic square):
	1 day n so nguyen duong sap xep trong 1 hinh vuong n x n
	Chia thanh n2 o vuong voi n hang va n cot
	Tong cac so tren moi hang, moi cot va hai duong cheo bang nhau.
*/


int main() {
   int size = 3;
   int matrix[3][3]; // = {{4,9,2},{3,5,7},{8,1,6}};
   int row, column = 0;
   int sum, sum1, sum2;
   int flag = 0;

   printf("\nNhap ma tran: ");
   for (row = 0; row < size; row++) {
      for (column = 0; column < size; column++)
         scanf("%d", &matrix[row][column]);
   }

   printf("In ma tran vua nhap: \n");
   for (row = 0; row < size; row++) {
      printf("\n");
      for (column = 0; column < size; column++) {
         printf("\t%d", matrix[row][column]);
      }
   }

   //Kiem tra tong phan tu tren cac duong cheo
   sum = 0;
   for (row = 0; row < size; row++) {
      for (column = 0; column < size; column++) {
         if (row == column)
            sum = sum + matrix[row][column];
      }
   }

   //Kiem tra tong phan tu tren cac hang
   for (row = 0; row < size; row++) {
      sum1 = 0;
      for (column = 0; column < size; column++) {
         sum1 = sum1 + matrix[row][column];
      }
      if (sum == sum1)
         flag = 1;
      else {
         flag = 0;
         break;
      }
   }

   //Kiem tra tong phan tu tren cac cot
   for (row = 0; row < size; row++) {
      sum2 = 0;
      for (column = 0; column < size; column++) {
         sum2 = sum2 + matrix[column][row];
      }
      if (sum == sum2)
         flag = 1;
      else {
         flag = 0;
         break;
      }
   }

   if (flag == 1)
      printf("\nDay so nay la Magic square!");
   else
      printf("\nDay so nay khong phai la Magic square!");

   return 0;
}
