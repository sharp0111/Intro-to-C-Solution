#ifndef stack_h
#define stack_h

struct Stack {
    int top;
    unsigned capacity;
    int *storage;
};

struct Stack *Stack_create(unsigned capacity);

int isFull(struct Stack *stack);

int isEmpty(struct Stack *stack);

void push(struct Stack *stack, int item);

int pop(struct Stack *stack);

void Stack_destroy(struct Stack *stack);

#endif