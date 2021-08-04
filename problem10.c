/*
 * Program to delete each character in string s1 that occures in string s2
 *
 * Compilation : gcc problem10.c
 * Execution : ./a.out
 *
 * Ankush Chhabra 1910990144 29/07/21
 * Assignment_1 -> C Foundation
*/
#include<stdio.h>
#include<string.h>
//function to find the length of the string
int customstrlen(char* s)
{
    int size=0;
    while(s[size]!='\0')
    {
        size++;
    }
    return size;
}
void squueze(char* s1,char* s2)
{
   int size1=customstrlen(s1);
   int size2=customstrlen(s2);
   int isvis[28];
   memset(isvis,0,sizeof(isvis));
   //marking all characters which are present in string s2 as visited
   for(int i=0;i<size2;i++)
   {
       int temp=s2[i]-'a';
       isvis[temp]=1;
   }
   int idx=0;
   //choosing those characters which are marked as 0 in string s1 as those characters will not be present in string s2
   for(int i=0;i<size1;i++)
   {
       if(isvis[*(s1+i)-'a']==0)
        {   
            *(s1+idx)=*(s1+i);
            idx++;
        }
   }
   s1[idx]='\0';
   //printing the squeed string
   printf("%s",s1);
}
int main() {
    
   char s1[100];
   //taking input of strings 
   scanf("%s",s1);
   
   char s2[100];
   scanf("%s",s2);
   squueze(s1,s2);
}
