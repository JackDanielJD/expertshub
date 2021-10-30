
#include<stdio.h>
#include<conio.h>
void main()
{
   int Idly=100, Dosa=50, Tea=50, Vadai=200;
   int AlaguIdly, AlaguDosa, AlaguTea, AlaguVadai;
   int SanthoshIdly, SanthoshDosa, SanthoshTea, SanthoshVadai;
   int MonishaIdly, MonishaDosa, MonishaTea, MonishaVadai;
   int BalanceIdly, BalanceDosa, BalanceTea, BalanceVadai;
   clrscr();
   printf("\n\tIdly ate by Alagu:");
   scanf("%d",&AlaguIdly);
   printf("\tDosa ate by Alagu:");
   scanf("%d",&AlaguDosa);
   printf("\tTea Drunk by Alagu:");
   scanf("%d",&AlaguTea);
   printf("\tVadai ate by Alagu:");
   scanf("%d",&AlaguVadai);
   printf("\n\tIdly ate by Santhosh:");
   scanf("%d",&SanthoshIdly);
   printf("\tDosa ate by Santhosh:");
   scanf("%d",&SanthoshDosa);
   printf("\tTea Drunk by Santhosh:");
   scanf("%d",&SanthoshTea);
   printf("\tVadai ate by Santhosh:");
   scanf("%d",&SanthoshVadai);
   printf("\n\tIdly ate by Monisha:");
   scanf("%d",&MonishaIdly);
   printf("\tDosa ate by Monisha:");
   scanf("%d",&MonishaDosa);
   printf("\tTea Drunk by Monisha:");
   scanf("%d",&MonishaTea);
   printf("\tVadai ate by Monisha:");
   scanf("%d",&MonishaVadai);
   Idly=Idly-AlaguIdly;
   Dosa=Dosa-AlaguDosa;
   Tea=Tea-AlaguTea;
   Vadai=Vadai-AlaguVadai;
   Idly=Idly-SanthoshIdly;
   Dosa=Dosa-SanthoshDosa;
   Tea=Tea-SanthoshTea;
   Vadai=Vadai-SanthoshVadai;
   Idly=Idly-MonishaIdly;
   Dosa=Dosa-MonishaDosa;
   Tea=Tea-MonishaTea;
   Vadai=Vadai-MonishaVadai;
   printf("\n\tBalance Idly after Alagu & Santhosh & Monisha eating:%d",Idly);
   printf("\n\tBalance Dosa after Alagu & Santhosh & Monisha eating:%d",Dosa);
   printf("\n\tBalance Tea after Alagu & Santhosh & Monisha eating:%d",Tea);
   printf("\n\tBalance Vadai after Alagu & Santhosh & Monisha eating:%d",Vadai);
   getch();
}



