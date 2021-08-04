/*
 *  Program to check whether a string is palindrome or not
 * Compilation : gcc problem6.c
 * Execution : ./a.out
 *
 * Ankush Chhabra 1910990144 29/07/21
 * Assignment_1 -> C Foundation
*/
#include<stdio.h>
#include<string.h>
int customstrlen(char* s)
{
    int size=0;
    while(s[size]!='\0')
    {
        size++;
    }
    return size;
}
int check_palindrome(char name[100],int size)
{
    int l=0,r=size-1;
    while(l<=r)
    {
        //ignoring the spaces after l
        while(name[l]==' ')
        {
            l++;
        }
        //ignoring the spaces before r
        while(name[r]==' ')
        {
            r--;
        }
        //if character at l and r is not same then return 0
        if(name[l]!=name[r])
        {
            return 0;
        }
        l++;
        r--;
    }
    //return 1 as string is palindrome
    return 1;
}
int main() {
    
   char name[100];
   //taking input of string 
   scanf("%[^\n]",name);
   int size=customstrlen(name);
   //converting the whole string to upper case 
   for(int i=0;i<size;i++)
   {
      if(name[i] >= 'a' && name[i] <= 'z') 
         name[i] = name[i] -32;
   }
   int l=0,r=size-1;
   //function to check palindrome
   int flg=check_palindrome(name,size);
   if(flg==1)
   {
       printf("true");
   }
   else
   {
       printf("false");
   }
}
