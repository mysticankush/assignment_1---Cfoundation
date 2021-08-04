/*
 *  Program to reverse the array
 *  * Compilation : gcc problem4.c
 * Execution : ./a.out
 *
 * Ankush Chhabra 1910990144 29/07/21
 * Assignment_1 -> C Foundation
*/
#include<stdio.h>
//function to reverse the array
void reverse(int a[],int n)
{
    //swaping the ith and (n-i+1)th element
    for(int i=1;i<=n/2;i++)
    {
        int temp=a[i];
        a[i]=a[n-i+1];
        a[n-i+1]=temp;
    }
}
int main() {
    //taking input the size of the array
    int n;
    scanf("%d",&n);
    //taking input the array
    int a[n+2];
    for(int i=1;i<=n;i++)
    scanf("%d",&a[i]);
    reverse(a,n);
    //reversed array
    for(int i=1;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
}
