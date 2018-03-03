#include <stdlib.h>
#include <assert.h>

struct Stack {
    int top;
    int capacity;
    int *storage;
};

/*
    Creates a stack by allocating the appropriate amount of memory for an
    instance of the Stack struct, and initializes all of the fields of the
    struct. Also allocates memory for the Stack's storage structure. 
    Stack->top should be initializes to -1.
*/
struct Stack *Stack_create(int capacity)
{
    struct Stack *stack = (struct Stack*) malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->storage = (int*) malloc(stack->capacity * sizeof(int));
    return stack;
}

/*
    Checks if the stack is full by comparing the top of the Stack to the
    total capacity - 1.
*/
int isFull(struct Stack *stack)
{
    return stack->top == stack->capacity - 1;
}

/*
    Checks if the Stack is empty by checking if top is -1.
*/
int isEmpty(struct Stack *stack)
{
    return stack->top == -1;
}

/*
    Adds the given item to the top of the Stack, if the Stack is room.
*/
void push(struct Stack *stack, int item)
{
    if (isFull(stack)) {
        return;
    }

    stack->top++;
    stack->storage[stack->top] = item;
}

/*
    Removes the item at the top of the Stack, if the Stack is empty.
*/
int pop(struct Stack *stack)
{
    if (isEmpty(stack)) {
        return -1;
    }

    return stack->storage[stack->top--];
}

/*
    Frees the memory used to hold the Stack instance and its
    associated storage. 
*/
void Stack_destroy(struct Stack *stack)
{
    assert(stack != NULL);

    free(stack->storage);
    free(stack);
}

#ifndef TESTING
int main(void)
{
    return 0;
}
#endif