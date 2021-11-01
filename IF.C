#include<stdio.h>
#include<conio.h>
int Rahul=1;
void main()
{
   while(Rahul)
   {
   yogesh:
   clrscr();
	printf("\n\tEnter Rahul Status:");
	scanf("%d",&Rahul);
	if(Rahul==0)
	{
		printf("\n\n\n\t\tRahul is sitting");
		//Rahul=1;
		getch();
		//continue;
		goto yogesh;
	}
	else if(Rahul==1)
	{
		printf("\n\n\n\t\tRahul is Standing");
		//getch();
		//break;
	}
	else
	{
		printf("\n\n\n\t\tInvalid Input");
	}
   getch();
   }
}