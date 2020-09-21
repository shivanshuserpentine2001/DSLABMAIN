#include <stdio.h>
#include <stdlib.h>
struct  student
{
    int age;
    int idno;
    int marks;
}s[11];
int main()

{ int N,i;
    printf("enter details of student in order ");
    printf("enter the number of students");
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
printf("enter student id :");
scanf("%d",&s[i].idno);
printf("enter age of student");
scanf("%d",&s[i].age);
printf("enter marks acquired");
scanf("%d",&s[i].marks);
    }
for(i=0;i<N;i++){
if(s[i].age>20&&65<=s[i].marks<=100)
printf("\n eligible for admission");
printf("student id:%d\t age:%d \t marks;%d",s[i].idno,s[i].age,s[i].age);
   }return 0;
}
