/*
 * Program to implement strncat_ , strcmp_ and strncpy_
 *
 * Compilation : gcc problem14.c
 * Execution : ./a.out
 *
 * Ankush Chhabra 1910990144 29/07/21
 * Assignment_1 -> C Foundation
*/
#include <stdio.h>
// Function for string Concatenation
// it operate only on first n characters of second string t (i.e  s + (first n characters of t))
int customstrlen(char* s)
{
    int size=0;
    while(s[size]!='\0')
    {
        size++;
    }
    return size;
}
void strncat_(char *s , char *t,int n)
{
    // Calculate size of string s
    int size1=customstrlen(s);
    
    // Calculate size of string t
    int size2=customstrlen(t);
    
    //final resultant string   
    char ans[size1 + size2 + 1];
    int pt=0;
    // first copy all characters of s in ans
    for(int i=0;i<size1;i++)
    ans[pt++]=s[i];
    // copy all characters of t in ans
    for(int i=0;i<size2 && i<n;i++)
    ans[pt++]=t[i];
    ans[pt]='\0';
    
    printf("%s",ans);
}
// Function for string comparsion
int strcmp_(char *s,char *t,int n)
{
    // Calculate size of string s
    int size1=customstrlen(s);
    
    // Calculate size of string t
    int size2=customstrlen(t);
   
    int pt=0;
    while(pt<n && pt<size1 && pt<size2)
    {
        // if characters are not Equal
        if(*(s+pt)!=*(t + pt))
        {
            // return ASCII value difference
            return (int)(*(s+pt) - *(t + pt));
        }
        pt++;
    }
    //in case all characters are same then compare size
    if(size1==size2) // if both Equal
    return 0;
    if(size1<size2) // if s2 is Greater than s1
    return 1;
    else
    return -1; // if s2 is Less than s1
}
// Function for copy atmost n characters of t in s
void strncpy_(char *s,char *t,int n)
{
    int pt=0;
    // copy till last character not null and atmost n character
    while(pt<n && *(t + pt)!='\0')
    {
        *(s + pt)=*(t + pt);
        pt++;
    }
    // output string
    printf("%s",s);
}
int main() {
    char s1[100];
    char s2[100];
    printf("Enter string s1 ");
    scanf("%s",s1);
    printf("Enter string s2 ");
    scanf("%s",s2);
    int n;
    printf("Enter value of n ");
    scanf("%d",&n);
    
    printf("strncat Function result :- ");
    strncat_(s1,s2,n);
    
    printf("\nstrcmp Function result :-  ");
    int t=strcmp_(s1,s2,n);
    if(t==0)
    printf("Equal");
    else if(t<0)
    printf("s1 is Less than s2");
    else
    printf("s1 is Greater than s2");
    
    printf("\nstrncpy Function result :- ");
    strncpy_(s1,s2,n);
    return 0;
}
