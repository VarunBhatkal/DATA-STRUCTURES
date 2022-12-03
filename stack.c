#include<stdio.h>
#include<stdlib.h>
#define size 3
int stack[size],top=-1,item;
void push();
void pop();
void display();
void main(){
int choice;
while(1){
printf("\n1. PUSH 2.POP 3.DISPLAY 4.EXIT\n");
printf("Enter your choice\n");
scanf("%d",&choice);
switch(choice){
case 1:push();
       break;
case 2:pop();
       break;
case 3:display();
       break;
case 4:exit(0);
}
}
}
void push(){
if(top==size-1){
printf("Stack Overflow");
return;
}
else{
printf("Enter the element ");
scanf("%d",&item);
top=top+1;
stack[top]=item;
}
}
void pop(){
int x;
if(top==-1){
printf("Stack Underflow");
return;
}
else{
x=stack[top];
top=top-1;
printf("Removed element= %d",x);
}
}
void display(){
int i;
if(top==-1){
    printf("Stack is Empty");
    return;
}
else{
    for(i=top;i>=0;i--)
        printf("%d\t",stack[i]);
}
}


