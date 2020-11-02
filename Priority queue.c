#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#define N 3
int queue[3][N];
int front[3]={0,0,0};
int rear[3]={-1,-1,-1};
int item,pr;
void pqinsert(int pr)
{
 if(rear[pr]==N-1)
 printf("Queue overflow\n");
 else
 {
 printf("enter the item\n");
 scanf("%d",&item);
 rear[pr]++;
 queue[pr][rear[pr]]=item;
 }
 return;
}
void pqdelete()
{
int i;
for(i=0;i<3;i++)
{
  if(rear[i]==front[i]-1)
  printf("queue empty\n");
  else
  {
  printf("deleted item is %d of queue %d\n",queue[i][front[i]],i+1);
  front[i]++;
  return;
  }
 }
}
void display()
{
int i,j;
for(i=0;i<3;i++)
{
if(rear[i]==front[i]-1)
  printf("queue empty %d\n",i+1);
else
  {
  printf("\nQUEUE %d:",i+1);
  for(j=front[i];j<=rear[i];j++)
    printf("%d\t",queue[i][j]);
  }
}
  return;
}

void main()
{
int ch;
while(1)
{
printf("\n******PRIORITY QUEUE******\n");
printf("\t1:PRIORITY QUEUE insert\n");
printf("\t2:PRIORITY QUEUE delete\n");
printf("\t3:PRIORITY QUEUE display\n");
printf("\t4:Exit\n");
printf("enter the choice\n");
scanf("%d",&ch);
switch(ch)
{
 case 1:printf("Enter the priority number\n");
		scanf("%d",&pr);
		if(pr>0 && pr<4)
		pqinsert(pr-1);
		else
		printf("Only 3 priority exists 1 2 3\n");
		break;
case 2:pqdelete();
	   break;
case 3:display();
	   break;
case 4:exit(0);
}
}
getch();
}
