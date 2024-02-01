#include<stdio.h>
#define maxsize 50
int stack[maxsize];
int top = -1;

void create() {
    int data;
    top++;
    printf("Enter the data: ");
    scanf("%d", &data);
    stack[top] = data;
}

void push() {
    int data;
    if (top == maxsize - 1) 
    {
        printf("Overflow stack is fulll\n");
    } 
    else
     {
        printf("Enter the data: ");
        scanf("%d", &data);
        top++;
        stack[top] = data;
        printf("pushed %d into stack",data);
    }
}

void pop() {
    if (top == -1)
     {
        printf("Stack is empty\n");
    } else {
        printf("poped %d from the stack :",stack[top]);
        stack[top] = '\0';
        top--;
    }
}

void display() {
    if (top == -1) {
        printf("Stack empty\n");
    }
    int i;
    for (i = top; i >= 0; i--) {
        printf("%d\n", stack[i]);
    }
}

int main()
 {
    int ch;
    while (1)
     {
        printf("\n1. Push\n2. Pop\n3. Display\n4. create\n5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                create();
                break;

            case 5:
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }
}
