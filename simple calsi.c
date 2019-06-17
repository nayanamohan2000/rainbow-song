  GNU nano 2.9.7                                                           sim.c

#include<stdio.h>
void main()
{
int a,b;
float result;
char ch;
printf("choose the operation to be performed(+,-,*,/,%)\n");
scanf("%c",&ch);
printf("enter the value of a and b\n");
scanf("%d %d",&a,&b);
switch(ch)
{
case '+':result=a+b;
break;
case '-':result=a-b;
break;
case '*':result=a*b;
break;
case '/':result=(float)a/(float)b;
break;
case '%':result=a%b;
break;
default:printf("invalid operation\n");
}
printf("result is %d %c %d=%f",a,ch,b,result);
}



