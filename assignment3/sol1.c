// source: https://codeforwin.org/2018/07/stack-implementation-using-array.html

/**
 * Stack implementation using array in C language.
 */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>     // For INT_MIN

#define SIZE 100

// Create a stack with capacity of 100 elements
int stack[SIZE];

// Initially stack is empty 
int top = -1;


/* Function declaration to perform push and pop on stack */
void push(int element);
int  pop();
bool IsEmptyStack();
bool IsFullStack();



int main()
{
    int data;

    printf("Enter data to push into stack: ");
    scanf("%d", &data);

    push(data);
    pop();
    isFullStack();
    isEmptyStack();

    return 0;
}

void isFullStack(){

    int count = 0;

    while (!stack[count])
    {
        count ++;
    }

    if(count == SIZE){
        return True;
    }

    return False;

}

void isEmptyStack(){
    if (isFullStack())
    {
        return False;
    }

    return True;
    
}



/**
 * Functiont to push a new element in stack.
 */
void push(int element)
{
    // Check stack overflow
    if (top >= SIZE)
    {
        printf("Stack Overflow, can't add more element element to stack.\n");
        return;
    }

    // Increase element count in stack
    top++;

    // Push element in stack
    stack[top] = element;

    printf("Data pushed to stack.\n");
}


/**
 * Function to pop element from top of stack.
 */
int pop()
{
    // Check stack underflow
    if (top < 0)
    {
        printf("Stack is empty.\n");

        // Throw empty stack error/exception
        // Since C does not have concept of exception
        // Hence return minimum integer value as error value
        // Later in code check if return value is INT_MIN, then
        // stack is empty
        return INT_MIN;
    }


    // Return stack top and decrease element count in stack
    return stack[top--];
}