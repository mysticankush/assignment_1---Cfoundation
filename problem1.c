/*
 *  Program to swap two numbers without using third variable
 * Compilation : gcc problem1.c
 * Execution : ./a.out
 * Ankush Chhabra 1910990144 29/07/21
 * Assignment_1 -> C Foundation
*/
#include<stdio.h>

int main() {
    int a,b;
    //taking input
    scanf("%d %d",&a,&b);
    //a will become sum of two numbers
    a=b+a;
    // now subtract b from a(sum of two numbers) , we will get a
    b=a-b;
    // now subtract b(value of a) from a(sum of two numbers) , we will get b 
    a=a-b;
    printf("%d %d",a,b);
}
