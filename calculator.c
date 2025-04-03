#include<stdio.h>
void main()
{
int a,b,c;
char op;
printf("Enter the number");
scanf("%d%d",&a,&b);
printf("Enter the operator [ + - * / ]  ");
scanf(" %c",&op);
switch(op)
{
case'+':
c=a+b;
printf("sum=%d\n",c);
break;
case'-':
c=a-b;
printf("differnce=%d\n",c);
break;
case'/':
c=a/b;
printf("division=%d\n",c);
break;
case'*':
c=a*b;
printf("product=%d\n",c);
break;
case'%':
c=a%b ;
printf("percentage=%d\n",c);
break;
default:
printf("Invalid");
break;
}
}
