#include<stdio.h>
#include<string.h>
int main()
{
      char a[10];
      printf("enter your name:");
      scanf("%s",&a);
      strrev(a);
      printf("your name in reverse is %s\n",a);
      return 0;
}

