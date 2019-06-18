#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,root1,root2,rpart,ipart;
    printf("enter three coefficients\n");;
    scanf("%f %f %f",&a,&b,&c);
    if(a==0&&b==0)
      {
          printf("invalid input\n");
      }
    else if(a==0)
      {
          printf("linear equation\n");
          root1=-c/b;
          printf("root is root1=%.3f\n",root1);
      }
     else
      {
          d=(b*b)-(4*a*c);
          if(d==0)
          {
              printf("roots are real and equal\n");
              root1=-b/(2*a);
              root2=root1;
              printf("roots are root1=%.3f and rot2=%.3f\n",root1,root2);
          }
          else if(d<0)
          {
              printf("roots are real and distinct\n");
              root1=(-b+sqrt(d))/(2*a);
              root2=(-b-sqrt(d))/(2*a);
              printf("roots are root1=%.3f and root2=%.3f\n",root1,root2);
          }
          else
          {
              printf("roots are imaginary\n");
              rpart=-b/(2*a);
              ipart=sqrt(fabs(d))/(2*a);
              printf("root1=%f+i%f\n",rpart,ipart);
              printf("root2=%f-i%f\n",rpart,ipart);
           }
         }
       }



