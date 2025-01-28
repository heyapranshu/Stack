#include <stdio.h>
#include <stdlib.h>

struct stack {
    int size;
    int top;
    int *arr;
};

// Function to check if the stack is empty
int isempty(struct stack *ptr) {
    if (ptr->top == -1) {
        return 1;
    }
    return 0;  // Add return 0 for cases when stack is not empty
}

// Function to check if the stack is full
int isfull(struct stack *ptr) {
    if (ptr->top == ptr->size - 1) {
        return 1;
    }
    return 0;  // Add return 0 for cases when stack is not full
}

int main() {
    // Initialize stack properties
    s->size = 80;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    // Checking by using functions
    if (isempty(s)) {
        printf("The stack is empty\n");
    } else {
        printf("Stack is not empty\n");
    }

    return 0;
}
