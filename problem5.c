/*
 *  Program to multiply two matrices
 * Compilation : gcc problem5.c
 * Execution : ./a.out
 *
 * Ankush Chhabra 1910990144 29/07/21
 * Assignment_1 -> C Foundation
*/
#include<stdio.h>

int main() {
    
   int size;
   scanf("%d",&size);
   int matrix1[size+2][size+2];
   int matrix2[size+2][size+2];
   //taking input of matrix1
   for(int i=1;i<=size;i++)
   {
       for(int j=1;j<=size;j++)
       {
           scanf("%d",&matrix1[i][j]);
       }
   }
   //taking input of matrix2 and initializing multiplied matrix all elements to 0
   int multiplied_matrix[size+2][size+2];
   for(int i=1;i<=size;i++)
   {
       for(int j=1;j<=size;j++)
       {
           scanf("%d",&matrix2[i][j]);
           multiplied_matrix[i][j]=0;
       }
   }
   //multiplying the matrix
   for(int i=1;i<=size;i++)//for row[i]
   {
       for(int j=1;j<=size;j++)//for column[j]
       {
           for(int temp=1;temp<=size;temp++)//multiple columns of row[i] with rows of column[j] from 1 to size
           {
               multiplied_matrix[i][j]+=matrix1[i][temp]*matrix2[temp][j];
           }
       }
   }
   //printing the multiplied matrix
   for(int i=1;i<=size;i++)
   {
       for(int j=1;j<=size;j++)
       {
           printf("%d ",multiplied_matrix[i][j]);
       }
       printf("\n");
   }
}
