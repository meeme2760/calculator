#include <stdio.h>
int main()
{
int Principal,Duration,Interest,Total;
int R=20,r=10;
 printf("Enter principal amount: ");
  scanf("%d",&Principal);
 printf("Duration: ");
 scanf("%d",&Duration);
 if(Principal<50000)
 {
 	Interest=Principal*r*Duration/100;
 } 
 else
 {
  Interest=Principal*R*Duration/100;
 }
 Total=Interest+Principal;
 printf("Interest earned:%d\n",Interest);
 printf("Tatal amount earned:%d\n",Total);

}
 
