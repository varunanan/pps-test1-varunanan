#include<stdio.h>
void input(int *a, int *b)
{
  printf("enter the value for the a: ");
  scanf("%d",a);
  printf("enter the value for the b: ");
  scanf("%d",b);
}
void add(int a, int b, int *sum)
{
  *sum=a+b;
}
void output(int a, int b, int sum)
{
  printf("the sum of %d and %d is : %d",a,b,sum);
}
int main()
{
  int a;
  int b;
  int sum = 0;
  input (&a, &b);
  add(a,b,&sum);
  output(a,b,sum);
  return 0;
}