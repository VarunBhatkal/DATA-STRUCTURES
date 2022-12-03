#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
# define n 3
int f=-1,r=-1,q[n];
void push();
void pop();
void display();
void main(){
int c;
printf("1.INSERT\t2.DELETE\t3.DISPLAY\t4.EXIT\n");
while(1){
printf("Enter your choice");
scanf("%d",&c);
switch(c){
case 1:push();
    break;
case 2:pop();
    break;
case 3:display();
    break;
case 4:exit(0);
default:printf("Invalid Choice");
}
}
}
void push(){
int item;
if(r==n-1){
printf("Queueu is full\n");
return;
}
if(f==-1 &&r==-1){
f=0;
r=0;
}else
r=(r+1);
printf("Enter the element to be inserted\n");
scanf("%d",&item);
q[r]=item;
}
void pop(){
int drop;
if(f==-1 &&r==-1){
printf("Queue us Empty\n");
return;
}
drop=q[f];
printf("Deleted element is %d\n",drop);
if(f==r){
f=-1;
r=-1;
}else
f=(f+1);
}
void display(){
if(f==-1 &&r==-1){
printf("Queue is empty\n");
return;
}
printf("Elements of queue\n");
for(int i=f;i<=r;i++){
printf("%d\t",q[i]);
}
}
