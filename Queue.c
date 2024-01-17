#include <stdio.h>
#include<stdlib.h>
#define maxsize 6

int queue[maxsize];
int filled[maxsize];
int front = -1, rear = -1;

void add_element(int data)
{
    if(rear == maxsize-1)
    {
        printf("\nOVERFLOW\n"); 
        return;
    }
    if(front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
    }
    else
    {  
        rear = rear+1;
    }
    queue[rear] = data;
    printf("Value inserted\n");
    filled[rear] = 1;
}

void remove_element(int position) 
{
    if (front == -1)
    {
        printf("UNDERFLOW.\n");
        return;
    }
    if (position < front || position > rear)
    {
        printf("Invalid index");
        return;
    }
    
    filled[position] = 0;
    printf("Element at index %d removed.\n", position);
}

void find_element(int data) 
{
    for (int i = front; i <= rear; i++) 
    {
        if (filled[i] && queue[i] == data) 
        {
            filled[i] = 0;
            printf("Element %d found at index %d and removed.\n", data, i);
            return;
        }
    }
    printf("Element %d not found in the queue.\n", data);
}

void print_queue() 
{
    if (front == -1) 
    {
        printf("Queue is empty.\n");
        return;
    }

    printf("Queue elements: ");
    for (int i = front; i <= rear; i++) 
    {
        if (filled[i]) 
        {
            printf("%d ", queue[i]);
        }
    }
    printf("\n");
}

int main()
{
    add_element(1);
    add_element(2);
    add_element(3);
    add_element(4);
    print_queue();

    remove_element(2);
    print_queue();

    find_element(3);
    print_queue();
    
    return 0;
}