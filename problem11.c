/*
 * Program to return first location in string 1 where any character from the string 2 occurse at that location
 *
 * Compilation : gcc problem11.c
 * Execution : ./a.out
 *
 * Ankush Chhabra 1910990144 29/07/21
 * Assignment_1 -> C Foundation
*/
#include<stdio.h>
#include<string.h>
int isvis[28];
//function to get first location of character in string s1 which is also present in string s2
int get(char s1[100],char s2[100])
{
    int size1=strlen(s1);
    //finding the first character in s1 which is marked as 1 as that character will be present in s2
    for(int i=0;i<size1;i++)
    {
        if(isvis[s1[i]-'a']==1)
        return i;
    }
    //In case , no character is found then return -1
    return -1;
}
int main() {
    
   char s1[100];
   //taking input of strings 
   scanf("%s",s1);
   char s2[100];
   scanf("%s",s2);
   int size2=strlen(s2);
   memset(isvis,0,sizeof(isvis));
   //marking all characters which are present in string s2 as visited
   for(int i=0;i<size2;i++)
   {
       int temp=s2[i]-'a';
       isvis[temp]=1;
   }
   char ans[100];
   int idx=0;
   //function to get the first index in s1 whose character is present in s2
   int location=get(s1,s2);
   printf("%d",location);
  
}
