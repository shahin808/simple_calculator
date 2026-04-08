#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5

int Stack[MAX_SIZE];
int top = -1;

void push();
void pop();
void display();

int main()
{
    int choice;

    do
    {
        printf("\n1.Push()\n2.Pop\n3.Display\n4.Exit\n");
        printf("Enter your choice :");
        scanf("%d", &choice);

        switch (choice)
        {
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
            exit(0);
            break;
        default:
            printf("Invalid choice!!!");
        }
    } while (choice != 4);
    return 0;
}
void push()
{
    int n;
    if (top == MAX_SIZE - 1)
    {
        printf("Stack is overflow");
    }
    else
    {
        printf("Enter any number :");
        scanf("%d", &n);
        top++;
        Stack[top] = n;
    }
}

void pop()
{
    int n;
    if (top == -1)
    {
        printf("Stack is empty");
    }
    else
    {
        n = Stack[top];
        top--;
    }
}

void display()
{
    int i;
    if (top == -1)
    {
        printf("Display Empty");
    }
    else
    {
        for (i = top; i >= 0; i--)
        {
            printf("%d\n", Stack[i]);
        }
    }
}
