#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<process.h>
struct node{
struct   node *link;
  int info;
};
typedef struct node *NODE;
NODE freenode(NODE x){
  free(x);
}
NODE getnode(){
  NODE x = (NODE)malloc(sizeof(struct node));
  if(x==NULL){
    printf("Memory is full\n");
    exit(0);
  }
  return x;
}
NODE insertfront(NODE first,int item){
  NODE temp =getnode();
  temp->info = item;
  temp->link = NULL;
  if(first == NULL){
    return temp;
  }
  temp->link = first;
  first = temp;
  return first;
}
// NODE insertrear(NODE first,int item){
//   NODE curr,temp;
//   temp = getnode();
//   temp ->info = item;
//   temp->link = NULL;
//   if(first ==NULL)
//   return temp;
//   curr = first;
//   while(curr->link !=NULL)
//     curr = curr->link;
//   curr->link = temp;
//   return first;
// }
NODE deletefront(NODE first){
  if(first ==NULL){
    printf("Stack is Empty\n");
    return first;
  }
  NODE temp = first;
  first = first->link;
  printf("item POPED = %d\n",temp->info);
  freenode(temp);
  return first;
}
NODE deleterear(NODE first){
  NODE prev,curr;
  if(first == NULL){
    printf("Queue Empty\n");
    return first;
  }
  if(first->link == NULL){
    printf("item Delete at rear end is: %d\n",first->info);
    free(first);
    return NULL;
  }
  curr = first;
  prev = NULL;
  while(curr->link != NULL){
    prev = curr;
    curr = curr->link ;
  }
  prev->link  = NULL;
  printf("item delete from Queue is = %d\n",curr->info);
  freenode(curr);
  return first;
}
void display(NODE first)
{
NODE temp;
for(temp=first;temp!=NULL;temp=temp->link)
{
printf("%d\n",temp->info);
}
}
int main(){
  int item,choice;
  NODE first =NULL,first2 =NULL;
  for(;;){
    printf("1:PUSH item to Stack  2:POP from stack  3:Display Stack  4:Insert Queue  5:Delete Queue   6:Display Queue  6:Exit : \n  ");
      printf("Enter The Choice: \t");
    scanf("%d",&choice);
    switch(choice){
      case 1 : printf("Enter item:\t");
               scanf("%d",&item);
              first= insertfront(first,item); break;
      case 2 :first=deletefront(first);break;
      case 3 :  if(first==NULL)
                printf("Stack empty cannot display items\n");
                else  display(first); break;
      case 4: printf("Enter item:\t");
               scanf("%d",&item);
               first2 = insertfront(first2,item);break;
     case 5: first2 = deleterear(first2);
                  break;
     case 6 : if(first2 ==NULL)
               printf("Queue empty cannot display items\n");
                   else display(first2);break;
      default :    exit(1);break;
    }
  }


}
