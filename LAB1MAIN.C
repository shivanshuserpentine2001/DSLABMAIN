#include<stdio.h>
#define OM 108
int top = -1;
int stack[OM];

/*Begin of push*/
void push()
{
	int pushed_item;
	if(top == (OM-1))
		printf("Stack Overflow\n");
	else
	{
		printf("Enter the item to be pushed in stack : ");
		scanf("%d",&pushed_item);
		top=top+1;
		stack[top] = pushed_item;
	}
}
/*End of push*/

/*Begin of pop*/
void pop()
{
	if(top == -1)
		printf("Stack Underflow\n");
	else
	{
		printf("Popped element is : %d\n",stack[top]);
		top=top-1;
	}
}
/*End of pop*/

/*Begin of display*/
void display()
{
	int i;
	if(top == -1)
		printf("Stack is empty\n");
	else
	{
		printf("Stack elements :\n");
		for(i = top; i >=0; i--)
			printf("%d\n", stack[i] );
	}
}
/*End of display*/

/*Begin of main*/
main()
{
	int choice;

	do{
		printf("1.Push\n");
		printf("2.Pop\n");
		printf("3.Display\n");
		printf("4.Quit\n");
		printf("Enter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
		 case 1 :
			push();
			break;
		 case 2:
			pop();
			break;
		 case 3:
			display();
			break;
		 case 4:
                        break;
		 default:
			printf("Wrong choice\n");
		}}while(choice!=4);
}
/*End of main*/
