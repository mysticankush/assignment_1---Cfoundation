 /*  Program to find the position of rightmost occurence of string t in string s
 * Compilation : gcc problem12.c
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
//function to find the rightmost position of string t in string s  
int strrindex(char s[100],char t[100])
{
    int size1=customstrlen(s);
    int size2=customstrlen(t);
    for(int i=size1-1;i>=0;i--)
    {
        //if first character of string t in string s at position i is equal 
        if(s[i]==t[0])
        {
            if(i+size2-1>size1-1)
            continue;
            int idx=0;
            //check for the presence of string t from position i in string s
            for(int j=i;j<=i+size2-1;j++)
            {
                if(s[j]!=t[idx++])
                {
                    break;
                }
            }
            if(idx==size2)
            return i;
        }
    }
    return -1;
}
int main() {
    char s[100];
    char t[100];
    //taking input of strings
    scanf("%s",s);
    scanf("%s",t);
    //function to find the rightmost position of string t in s
    int pos=strrindex(s,t);
    printf("%d",pos);
}
