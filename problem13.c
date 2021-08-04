 /*  Program to check whether string t occures at the end of string s
 * Compilation : gcc problem13.c
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
//Function to check whether string t occures at the end of string s
int strend(char s[100],char t[100])
{
    int size1=customstrlen(s);
    int size2=customstrlen(t);
    if(size1<size2)
    return -1;
    int idx=size2-1;
    //running a reverse loop to check each character of string t from the last of string s
    for(int i=size1-1;i>=0;i--)
    {
        //if character is not found then return 0
        if(s[i]!=t[idx--])
        return 0;
        //if idx==-1 , it means string t is finished and all the character are present in the end of string s , so return 1 
        if(idx==-1)
        return 1;
    }
}
int main() {
    char s[100];
    char t[100];
    //taking input of two strings
    scanf("%s",s);
    scanf("%s",t);
    //function to check whether string t is at the end of string s or not 
    int pos=strend(s,t);
    printf("%d",pos);
}
