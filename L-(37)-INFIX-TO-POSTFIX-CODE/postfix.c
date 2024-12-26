#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stack {
    int size;
    int top;
    char *arr;
};

int isEmpty(struct stack* ptr) {
    return ptr->top == -1;
}

int isFull(struct stack* ptr) {
    return ptr->top == ptr->size - 1;
}

char pop(struct stack* s) {
    if (isEmpty(s)) {
        printf("Stack Is Underflow\n");
        return '\0'; // Return a null character if stack is empty
    } else {
        return s->arr[s->top--];
    }
}

void push(struct stack* s, char val) {
    if (isFull(s)) {
        printf("Stack Is Overflow\n");
    } else {
        s->arr[++s->top] = val;
    }
}

char stackTop(struct stack* s) {
    if (!isEmpty(s)) {
        return s->arr[s->top];
    }
    return '\0'; // Return a null character if stack is empty
}

int precedence(char ch) {
    if (ch == '*' || ch == '/') {
        return 3;
    } else if (ch == '+' || ch == '-') {
        return 2;
    }
    return 0;
}

int isOperator(char ch) {
    return (ch == '+' || ch == '-' || ch == '/' || ch == '*');
}

char* infixToPostfix(char* infix) {
    struct stack* s = (struct stack*)malloc(sizeof(struct stack));
    s->size = strlen(infix);
    s->top = -1;
    s->arr = (char *)malloc(s->size * sizeof(char));

    char* postfix = (char*)malloc((strlen(infix) + 1) * sizeof(char));
    int i = 0, j = 0;

    while (infix[i] != '\0') {
        if (infix[i] == ' ') {
            i++; // Skip spaces
            continue;
        }
        if (!isOperator(infix[i])) {
            postfix[j++] = infix[i]; // Copy operand to postfix
        } else {
            while (!isEmpty(s) && precedence(infix[i]) <= precedence(stackTop(s))) {
                postfix[j++] = pop(s); // Pop from stack to output
            }
            push(s, infix[i]); // Push current operator to stack
        }
        i++;
    }

    while (!isEmpty(s)) {
        postfix[j++] = pop(s); // Pop remaining operators
    }
    postfix[j] = '\0'; // Null-terminate the postfix string

    free(s->arr);
    free(s);
    return postfix;
}

int main() {
    char* infix = "a - b + t / 6";
    char* postfix = infixToPostfix(infix);
    printf("Postfix Is: %s\n", postfix);
    free(postfix); // Free the allocated memory for postfix
    return 0;
}