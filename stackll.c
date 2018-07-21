#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct stack{
int data;
struct stack *next;
}*top;
void push(int);
void pop();
void show();
void main()
{
        int num,ch;
        top=NULL;
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
                 struct stack *temp;
                 temp=(struct stack*)malloc(sizeof(struct stack *));
                 temp->data=num;
                 temp->next=top;
                 top=temp;
                }
                void pop()
                {
                        int num;
                        struct stack *temp;
                        if(top==NULL)
                        {

                                printf("underflow");
                                return;
                        }
                                temp=top;
                                num=temp->data;
                                top=top->next;
                                free(temp);
                                printf("data removed=%d",num);
                }
                void show()
                {
                        struct stack *q;

                        if(top==NULL)
                        {
                                printf("no element in stack");
                                return;
                }
                        printf("elements in stack\n");
                        for(q=top;q!=NULL;q=q->next)
                        {

                                printf("\n%d",q->data);
                        }
                }


