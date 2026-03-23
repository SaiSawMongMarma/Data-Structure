/*
 * C Program to Implement a Queue using an Array
 */
#include <stdio.h>
#include <stdlib.h>
#define n 5

void enqueue();
void dequeue();
void display();
int queue[n];
int rear = - 1;
int front = - 1;
int main()
{
    int ch;
    printf("1.Insert element to queue \n");
    printf("2.Delete element from queue \n");
    printf("3.Display all elements of queue \n");
    printf("4.Quit \n");
    while (1)
    {
        printf("Enter your choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
            printf("Wrong choice \n");
        } /* End of switch */
    } /* End of while */
} /* End of main() */

void enqueue()
{
    int item;
    if (rear == n - 1)
    printf("Queue Overflow \n");
    else
    {
        if (front == - 1)
        /*If queue is initially empty */
        front = 0;
        printf("Inset the element in queue : ");
        scanf("%d", &item);
        rear = rear + 1;
        queue[rear] = item;
    }
} /* End of insert() */

void dequeue()
{
    if (front == - 1 || front > rear)
    {
        printf("Queue Underflow \n");
        return ;
    }
    else
    {
        printf("Element deleted from queue is : %d\n", queue[front]);
        front = front + 1;
    }
} /* End of delete() */

void display()
{
    int i;
    if (front == - 1)
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");
        for (i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
} /* End of display() */

