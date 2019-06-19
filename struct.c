NU nano 2.9.7                                                                                                                      strct.c

#include<stdio.h>
struct student
{
 char usn[50];
 char name[50];
 int marks;
};
int main()
{
    struct student s[10];
    int i,n,countav=0,countbv=0;
    float sum,average;
    printf("enter the number of studemts\n");
    scanf("%d",&n);
    printf("enter student info\n");
    for(i=0;i<n;i++)
    {
        printf("enter usn\n");
        scanf("%s",&s[i].usn);
        printf("enter name\n");
        scanf("%s",&s[i].name);
        printf("enter the marks\n");
        scanf("%d",&s[i].marks);
     }
printf("displaying student info\n");
  for(i=0;i<n;i++)
   {
     printf("usn:%s\n",s[i].usn);
     printf("name:%s\n",s[i].name);
     printf("marks:%d\n",s[i].marks);
     printf("\n");
   }
for(i=0;i<n;i++)
 {
     sum=sum+s[i].marks;
 }
average=sum/n;
printf("average marks:%f",average);
for(i=0;i<n;i++)
   {
     if(s[i].marks>=average)
      countav++;
     else
      countbv++;
    }
 printf("total number of students above ave is %d\n",countav);
 printf("total number of students below ave is %d\n",countbv);
}





