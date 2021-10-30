#include<stdio.h>
#include<conio.h>
void main()
{
   int Puri, RahulPuri, SanjayPuri, KamaliPuri, BalancePuri, AteR, AteS,AteK;
   clrscr();
   printf("\n\tEnter the Total Puris:");
   scanf("%d",&Puri);
   printf("\tEnter the Puri ate by Rahul:");
   scanf("%d",&RahulPuri);
   printf("\tEnter the Puri ate by Sanjay:");
   scanf("%d",&SanjayPuri);
   printf("\tEnter the Puri ate by Kamali:");
   scanf("%d",&KamaliPuri);
   AteR=Puri*RahulPuri/100;
   AteS=Puri*SanjayPuri/100;
   AteK=Puri*KamaliPuri/100;
   BalancePuri=Puri-(AteR+AteS);
   BalancePuri=BalancePuri-AteK;
   printf("\n\tPuri ate by Rahul:%d",AteR);
   printf("\n\tPuri ate by Sanjay:%d",AteS);
   printf("\n\tPuri ate by Kamali:%d",AteK);
   printf("\n\tBalance Puri:%d",BalancePuri);
   printf("\n\n\n\n\n\n\n\t\t\t\tByeee See you in next program!");
   getch();
}