#include<stdio.h>
#include<conio.h>
void main()
{
   int no1,no2,out1,out2,out3,out4,out5;
   clrscr();
   printf("Enter the value:");
   scanf("%d%d",&no1,&no2);
   //printf("Enter the input2:");
   //scanf("%d",&no2);
   out1=no1+no2;
   printf("Sum of the value are %d",out1);
   out2=no1-no2;
   printf("\nsub of values:%d",out2);
   out3=no1*no2;
   printf("\nmultiply of values: %d",out3);
   out4=no1/no2;
   printf("\ndivision of values: %d",out4);
   out5=no1%no2;
   printf("\nmodulus of values: %d",out5);
   getch();
}