#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 10
int stack[MAX];
int top=-1;
void push(int);
void pop();
void show();
void main()
{
        int i,num,ch;
        do
        {
                printf("\n enter 1 to push elements in stack");
                printf("\n enter 2 to pop elements from stack");
                printf("\n enter 3 to show element of stack");
                printf("\n enter 4 to exit");
                printf("\n enter your choice");
                scanf("%d",&ch);
                switch(ch)
                {
                case 1:
                        printf("enter element to enter in stack");
                        scanf("%d",&num);
                        push(num);
                        break;
                case 2:
                        pop();
                        break;
                case 3:
                        show();
                        break;
                case 4:
                        exit(0);
                default:
                        printf("enter valid choice");
                }
        }while(1);
}
                void push(int num)
                {
                        if(top==MAX-1)
                        {

                                printf("overflow");
                        }
                                top=top+1;
                                stack[top]=num;
                }
                void pop()
                {
                        int num;

                        if(top==-1)
                        {

                                printf("underflow");
                                return;
                        }
                                num=stack[top];
                                top=top-1;
                }
                void show()
                {
                        int i,ptr=top;

                        if(top==-1)
                        {
                                printf("no element in stack");
                                return;
                }
                        while(ptr!=-1)
                        {
                                printf("\n %d",stack[ptr]);
                                ptr--;
                        }
                }


