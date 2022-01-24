#include<stdio.h>
int input()
{
  int a;
  printf("enter the number:\n");
  scanf("%d",&a);
  return a;
}
int largest(int a,int b,int c)
{
  int large;
  if(a>b && a>c)
  {
    large=a;
  }
  else if (b>a && b>c)
  {
    large=b;
  }
  else
  {
    large=c;
  }
  return large;
}
void output(int large)
{
  printf("large value is %d",large);
  
}
int main()
{
  int a,b,c,ans;
  a=input();
  b=input();
  c=input();
  ans=largest(a,b,c);
  output(ans);
  return 0;
}