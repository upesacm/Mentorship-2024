#include<stdio.h>
int fact(int n)
{
  if(n==0)
     return 1;
  else
     return n * fact(n-1);  
}
int main()
{
  int num , ans;
  printf("Enter the number to find factorial:\t");
  scanf("%d",&num);
  ans = fact(num);
  printf("the factorial of %d is %d",num, ans);
  return 0;
}