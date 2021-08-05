/*
 * Program to convert string into hexadecimal digits
 *
 * Compilation : gcc problem9.c
 * Execution : ./a.out
 *
 * Ankush Chhabra 1910990144 29/07/21
 * Assignment_1 -> C Foundation
*/
#include <stdio.h>
#include <string.h>
//function to convert a string of hexadecimal digits into its equivalent integer value
int htoi(char* s,int n){
    
    // till where we have to calculate integer value ignore 0x,0X
    int i = 0;
    //base = 16^0 = 1
    int b = 1;
    
    // skip OX,Ox in string if present
    if(s[0]=='0' && (s[1] == 'x' || s[1] == 'X')){
        i+=2;
    }
    
    int answer = 0;
    
    for(int j = n-1; j >= i; j--)
    {
        if(s[j] >= '0' && s[j] <= '9')
        {
            answer += (s[j] - '0') * b;
            b *= 16;
        }
        else if(s[j] >= 'A' && s[j] <= 'F')
        {
            answer += (s[j] - 55) * b;
            b *= 16;
        }
        else if(s[j] >= 'a' && s[j] <= 'f')
        {
            answer += (s[j] - 87) * b;
            b *= 16;
        }
        
    }
    
    return answer;
    
}
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

int main()
{
    char s[102];

    printf("Enter the String : ");
    fgets(s,102,stdin);
    int size=customstrlen(s);
    int ans = htoi(s,size);
    
    printf("Output : %d\n",ans);
    
    return 0;
}
