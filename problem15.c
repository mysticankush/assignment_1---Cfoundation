/*
 * Program for reverse Polish expression
 *
 * Compilation : gcc problem15.c
 * Execution : ./a.out
 *
 * Ankush Chhabra 1910990144 29/07/21
 * Assignment_1 -> C Foundation
*/

#include <stdio.h>
#include <string.h>   

// maximum size of stack
int mx = 100;

// Intializing stack 
double stack[100];

// top index of stack = -1
int top = -1; 

// Function to check if stack is empty
int isempty()
{
   if(top == -1)
      return 1;
   else
      return 0;
}

// Function to check if stack is full
int isfull() 
{
   if(top != mx-1)
      return 0;
   else
      return 1;
}

// Function to push data in stack at the top
void push(double value)
{
   if(!isfull()) 
   {  //increase the size of stack by 1
      top = top + 1;   
      stack[top] = value;
   } 
   else 
   {
      printf("Stack Overflow\n");
   }
}


// Function to remove element from top of the stack
double pop()
{
   double value;
	
   if(!isempty())
   {
      value = stack[top];
      //decrease the size of stack by 1
      top = top - 1;   
      return value;
   }
   else 
   {
      printf("Stack Underflow.\n");
   }
}
//function to do arithemetic operations
double dooperation(double a, double b, char operation)
{
    if(operation == '-')
    {
        return a - b;
    }
    else if(operation == '+')
    {
        return a + b;
    }
    else if(operation == '/')
    {
        return a / b;
    }
    else
    {
        return a * b;
    }
}

void solve(int size)
{
    double answer;
    for(int i = 0; i < size; i++)
    {
        double x,y;
        char ch;
        scanf(" %c", &ch);
        //check for digit
        if(ch>='0' && ch<='9')
        {
          int val=ch-'0';
          push(val);
        }
        else{
          x = pop();
          y = pop();
    
          answer = dooperation(y, x, ch);
          push(answer);
        }
    }
    printf("%.1lf",answer);
}

int main(){
    int size;
    printf("Enter no. of Elements: ");
    scanf("%d", &size);
    solve(size);
    return 0;
}
