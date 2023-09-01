#include<stdio.h>
#include<stdlib.h>
void push(int stack[]);
void pop(int stack[]);
void display(int stack[]);
int top=0;
int main()
{
    int stack[5];
    printf("Enter the elements in the stack\n");
    do{
    int choice;
    printf("Enter the correct choice \n 1:push \n 2:pop  \n 3:display\n 4:close the program\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        push(stack);
        break;
    case 2:
        pop(stack);
        break;
    case 3:
        display(stack);
        break;
    case 4:
        return 0;
    default:
        printf("Invalid input \n");
        break;
    }

}while(1);
return 0;
}
    
void push(int stack[])
{
    int a;
    // if top==stack[n-1] --> overflow and then else
    if (top==5)
        {
            printf("Overflow\n");
        }
        else
        {
            printf("Enter the number to be pushed ");
            scanf("%d",&a);
            stack[top]=a;
            top+=1;   
        }
}

void pop(int stack[])
{
    if (top==-1)
    {
        printf("Underflow\n");
        
    }
    else
    {
        int temp=stack[top];
        printf("popped element:%d \n",temp);
        top+=1;
    }
}

void display(int stack[])
{
    for(int i=top-1;i>=0;i--)
    {
        printf("%d  ",stack[i]);
    }
    printf("\n");
}
