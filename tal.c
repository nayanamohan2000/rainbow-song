#include<stdio.h>
#include<math.h>
#define pi 3.14
int main()
{
    int i,degree;
    float x,sum=0,nume,term,fact;
    printf("enter the degree value\n");
    scanf("%d",&degree);
    x=degree*(pi/180);
    nume=x;
    fact=1;
    i=2;
    do
      {
        term=nume/fact;
        nume=-nume*x*x;
        fact=fact*i*(i+1);
        sum=sum+term;
        i=i+2;
      }
     while(fabs(term)>=0.00001);
       printf("the sine of  %d is %.3f",degree,sum);
       printf("the inbuilt function sin(%d) is %.3f",degree,sin(x));
}




