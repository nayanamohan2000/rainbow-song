
#include<stdio.h>
int isprime(int);
int main()
{
    int num;
    printf("enter the num\n");
    scanf("%d",&num);
    if(isprime(num))
    {
      printf("%d is prime",num);
     }
    else
     printf("%d is not prime",num);
}
int isprime(int num)
{
 int i;
 if(num==0||num==1)
  {
    return 0;
  }
  for(i=2;i<num-1;i++)
  {
    if(num%i==0);
    {
      return 0;
     }
   return 1;
}
}

