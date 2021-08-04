/*
 *  Program to revere a string
 * Compilation : gcc problem8.c
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
int reverse(char name[100],int size)
{
    int l=0,r=size-1;
    while(l<=r)
    {
        //swaping characters present at indices l and r 
        char temp=name[l];
        name[l]=name[r];
        name[r]=temp;
        l++;
        r--;
    }
}
int main() {
    
   char name[100];
   //taking input of string 
   scanf("%[^\n]",name);
   int size=customstrlen(name);
   int l=0,r=size-1;
   //function to reverse the string
   int flg=reverse(name,size);
   printf("%s",name);
}
