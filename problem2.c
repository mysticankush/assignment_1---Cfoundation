/*
 *  Program to make pyramid
 * Compilation : gcc problem2.c
 * Execution : ./a.out
 *
 * Ankush Chhabra 1910990144 29/07/21
 * Assignment_1 -> C Foundation
*/
#include<stdio.h>

int main() {
    int steps;
    //taking input
    scanf("%d",&steps);
    int l=steps,r=steps;
    //while loop till l>=1 , running for n times
    while(l>=1)
    {
        //print all spaces before l as there is not pyramid
        for(int i=1;i<=l-1;i++)
        {
            printf(" ");
        }
        //starting of pyramid
        int cnt=0;
        //printing '#' alternatively 
        for(int i=l;i<=r;i++)
        {
            if((cnt&1)!=0)
            printf(" ");
            else
            printf("#");
            cnt++;
        }
        printf("\n");
        l--;
        r++;
    }
}
