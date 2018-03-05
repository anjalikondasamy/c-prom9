#include<stdio.h>
#include<conio.h>
void main()
{
  int n,l,r;
  clrscr();
  printf("Enter the number");
  scanf("%d",&n);
  printf("Enter he value for l and r");
  scanf("%d\n%d",&l,&r);
  if(n>=l&&n<=r)
  {
    printf("YES");
  }
  else 
  {
    printf("NO");
  }
