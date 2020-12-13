#include <stdio.h>
#include <conio.h>

int top = -1;
int arr[1000];
void push( int n)
{
    int a;
    if (top == n)
        printf("Stack Full\n");
    else
    {
        top++;
        printf("Enter the element to push:");
        scanf_s("%d", &a);
        arr[top] = a;
    }
   
}

void pop()
{
    if (top == -1)
        printf("Stack Empty\n");
    else
    {
        printf("ELement poped: %d",arr[top]);
        top--;
    }
}

void display(int n)
{
    int i = 0;
    printf("Elements of stack are: \n");
    for (i = top; i>= 0; i--)
    {
        printf("% d\n", arr[i]);
    }
    if (top == -1)
        printf("Stack Empty\n");
}
int main()
    {
       
        int n,choice,a;
        printf("\n Enter the size of STACK[MAX=100]:");
        scanf_s("%d", &n);
        printf("\n\t STACK OPERATIONS USING ARRAY");
        printf("\n\t--------------------------------");
        printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT");
        do
        {
            printf("\n Enter the Choice:");
            scanf_s("%d", &choice);
            switch (choice)
            {
            case 1:
            {
               
                push(n);
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display(n);
                break;
            }
            case 4:
            {
                printf("\n\t EXIT POINT ");
                break;
            }
            default:
            {
                printf("\n\t Please Enter a Valid Choice(1/2/3/4)");
            }

            }
        } while (choice != 4);
        return 0;
 
}
