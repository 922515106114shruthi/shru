#include<stdio.h>
#include<conio.h>
void main()
{
int i,a[20],n;
printf(" enter the range:");
scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
  	scanf("%d",&a[i]);
  }
  for(i=1;i<=n;i++)
  {
  	printf("%d %d\n",a[i],i);
  
  }
  getch();
  }
