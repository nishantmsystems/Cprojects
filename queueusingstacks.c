#include <stdio.h>

#include <conio.h>
int queue_array[1000];
int rear = 0;
int front = 0;

void insert(int n)
{
    int a;
    if (rear == n)
        printf("Queue is Full\n");
    else
    {
        printf("Enter the element to push: \n");
        scanf_s("%d", &a);
        queue_array[rear] = a;
        rear++;
    }
        
}

void dequeue(int n)
{
    if (rear == front)
        printf("Queue Empty\n ");
    else
    {
        printf("Element poped: %d", queue_array[front]);
        for (int i = 0; i < rear; i++)
        {
            queue_array[i] = queue_array[i+1];
        }
        rear--;
        
    }
}
void display()
{
    if (rear == front)
        printf("Queue Empty\n ");
    else
        for (int i = front; i < rear; i++)
        {
            printf("%d \n", queue_array[i]);
        }

}
int main()
{
    int n , choice;
    printf("\n Enter the size of STACK[MAX=100]:");
    scanf_s("%d", &n);
    while (1)
    {
        
        printf("1.Insert element to queue \n");
        printf("2.Delete element from queue \n");
        printf("3.Display all elements of queue \n");
        printf("4.Quit \n");
        printf("Enter your choice : ");
        scanf_s("%d", &choice);
        switch (choice)
        {
            case 1:
                insert(n);
                break;
            case 2:
                dequeue(n);
                break;
            case 3:
                display();
                break;
            case 4:
               return 0;
            default:
                printf("Wrong choice \n");
        } /* End of switch */
    } /* End of while */
} /* End of main() */
