#include<stdio.h>
#include<stdlib.h>
#define size 3
struct stack{
int s[size];
int top;
};
void push(struct stack *);
void pop(struct stack *);
void display(struct stack *);
void main(){
struct stack st;
int choice;
st.top=-1;
while(1){
printf("\n1. PUSH 2.POP 3.DISPLAY 4.EXIT\n");
printf("Enter your choice");
scanf("%d",&choice);
switch(choice){
case 1: push(&st);
break;
case2:pop(&st);
break;
case 3:display(&st);
break;
case 4:exit(0);
}
}
}
void push(struct stack *p){
int item;
if(p->top==size-1){
printf("Stack Overflow");
return;
}else
{
printf("enter the element");
scanf("%d",&item);
p->top++;
p->s[p->top]=item;
}
}
void pop(struct stack *p){
int x;
if(p->top==-1){
printf("Stack Underflow");
return;
}
else{
x=p->s[p->top];
p->top--;
printf("Removed element= %d",x);
}
}
void display(struct stack *p){
int i;
if(p->top==-1){
    printf("Stack is Empty");
    return;
}
else{
    for(i=p->top;i>=0;i--)
        printf("%d\t",p->s[i]);
}
}
