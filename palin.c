
#include<stdio.h>
int main()
{
    int n,digit,rev=0,temp;
    printf("enter the value of n\n");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
       digit=n%10;
       rev=rev*10+digit;
       n=n/10;
    }
   printf("given number is %d\n",temp);
   printf("rev of the given number is %d\n",rev);
   if((rev=temp))
       printf("palindrome\n");
   else if((rev!=temp))
       printf("not palindrome\n");

}

