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
printf("1.INSERT\t2.DELELTE\t3.DISPLAY\t4.EXIT\n");
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
default:printf("Invalid Choice\n");
}
}
}
void push(){
int item;
if(f==r+1 ||(f==0 &&r==n-1)){
printf("Queue is full\n");
return;
}
if(f==-1 &&r==-1){
f=0;
r=0;
}
else
r=(r+1)%n;
printf("Enter the element to be inserted");
scanf("%d",&item);
q[r]=item;
}
void pop(){
int drop;
if(f==-1 &&r==-1){
printf("Queue is Empty\n");
return;
}
drop=q[f];
printf("Deleted Element = %d\n",drop);
if(f==r){
f=-1;
r=-1;
}else
f=(f+1)%n;
}
void display(){
if(f==-1 &&r==-1){
printf("Queue is Empty\n");
return;
}
if(f<=r){
for(int i=f;i<=r;i++)
printf("%d\t",q[i]);
}else{
for(int i=f;i<=n-1;i++){
printf("%d\t",q[i]);
}
for(int j=0;j<=r;j++){
printf("%d\t",q[j]);
}
}
}
