#include <stdio.h>
#define size 50

int queue[size];
int front = -1;
int rear = -1;

void enqueue(int item)
{
    if (rear == size - 1)
    {
        printf("Overflow\n");
        return;
    }

    else if (front == -1 && rear == -1)
    {
        front =  0;
    }

   
        printf("Enter the value to insert: ");
        scanf("%d", &item);
        rear++;
        queue[rear] = item;
    
}

void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("Underflow\n");
        return;
    }
    else if (front == rear)
    {
        printf("%d dequeued\n", queue[front]);
        front = rear = -1;
    }
    else
    {
        printf("%d dequeued\n", queue[front]);
        front++;
    }
}

void display()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is empty\n");
        return;
    }

    printf("Queue elements: ");
    for (int i = front; i <= rear; i++)
    {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main()
{
    int ch, item;
    while (1)
    {
        printf("\n1. Enqueue \n2. Dequeue \n3. Display \n4. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            enqueue(item);
            display();
            break;

        case 2:
            dequeue();
            display();
            break;

        case 3:
            display();
            break;

        case 4:
            return 0;

        default:
            printf("Invalid output\n");
            break;
        }
    }
}
