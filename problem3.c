/*
 *  Program to find number of vowels and consonants
 *  * Compilation : gcc problem3.c
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
int main() {
   char name[20];
   //taking input of string 
   scanf("%[^\n]",name);
   int size=customstrlen(name);
   int vowels=0;
   //counting all the vowels 
   for(int i=0;i<size;i++)
   {
       if(name[i]=='A' || name[i]=='a' || name[i]=='e' || name[i]=='E' || name[i]=='I' || name[i]=='i' || name[i]=='O' || name[i]=='o' || name[i]=='U' || name[i]=='u')
       vowels++;
   }
   //consonants will be total size minus vowels
   int consonants=size-vowels;
   printf("Vowels = %d Consonants = %d",vowels,consonants);
}
