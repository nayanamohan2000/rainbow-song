#include<stdio.h>
int main()
{
    char name[100];
    float unit,charge,min=100;
    printf("enter the name and units consumed\n");
    scanf("%s %f",&name,&unit);
    if(unit<=200)
    charge=unit*0.80+min;
    else if(unit<=300)
    charge=(unit-200)*0.90+160+min;
    else
    if(unit>300)
    charge=(unit-300)*1+250+min;
    if(charge>=400)
    charge=charge+charge*0.15;
    printf("name :%s\n charge : %.3f\n",name,charge);
 }


