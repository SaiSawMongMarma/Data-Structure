#include<stdio.h>
void TOH(int n,char beg,char aux,char end)
{
   if(n<=0)
   {
       printf("Not possible");
   }
   else if(n==1)
   {
      printf("%c to %c\n",beg,end);
   }
   else
   {
      TOH(n-1,beg,end,aux); //TOH(n-1,A,C,B)
      TOH(1,beg,aux,end);   //TOH(1,A,B,C)
      TOH(n-1,aux,beg,end); //TOH(n-1,B,A,C)
   }
}
int main()
{
   int n;
   printf("Enter no of discs: ");
   scanf("%d",&n);
   printf("Tower of Hanoi of %d discs:\n",n);
   TOH(n,'A','B','C');
}



