#include<stdio.h>
/*sum function is start*/
int sum()
{
int a,b,c;
printf("Enter which two numbers you want to sum:\n");
scanf("%d %d",&a,&b);
c=a+b;
return(c);
}
/*sum function is end*/
/*sub function is start*/
int sub()
{
int a,b,c;
printf("Enter which two numbers you want to subtraction:\n");
scanf("%d %d",&a,&b);
c=a-b;
return(c);
}
/*sub function is end*/
/*multi function is start*/
int multi()
{
int a,b,c;
printf("Enter which two numbers you want to multiplication:\n");
scanf("%d %d",&a,&b);
c=a*b;
return(c);
}
/*multi function is end*/
/*divide function is start*/
int divide()
{
int a,b,c;
printf("Enter which two numbers you want to division:\n");
scanf("%d %d",&a,&b);
c=a/b;
return(c);
}
/*divide function is end*/
/*main function is start*/
void main()
{
int ch,result;
do
{
printf("\n*******main menu******\n");
printf("Enter 1.for sum.\n");
printf("Enter 2.for subtraction.\n");
printf("Enter 3.for multiplication.\n");
printf("Enter 4.for division.\n");
printf("Enter 5.for exit program.\n");
printf("choose any menu.\n");
scanf("%d",&ch);
switch (ch)
{
case 1:
result=sum();
printf("Sum of entered two numbers:%d\n",result);
break;
case 2:
result=sub();
printf("Subtraction of entered two numbers:%d\n",result);
break;
case 3:
result=multi();
printf("Multiplication of entered two numbers:%d\n",result);
break;
case 4:
result=divide();
printf("Division of entered two numbers:%d\n",result);
break;
case 5:
break;      
default:printf("Sorry! invalid number try again.\n");
break;
}
} while (ch!=5);
    
}
