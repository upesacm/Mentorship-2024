#include<stdio.h>
int fact(int n) {
  int x;
  if (n==0) {
    retrun 1;
  }
  else {
    x=n*fact(n-1);
    return x;
  }
}
int main() {
  int n;
  printf("enter number: ");
  scanf("%d",&n);
  printf("factorial of %d is: %d",n,fact(n));
  return 0;
}
