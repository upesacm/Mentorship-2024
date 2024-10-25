#include<stdio.h>
int main()
{
  char str[50];
  char *ptr, *lptr;
  printf("Enter a string:\t");
  scanf("%s",str);
  for(ptr = str; *ptr != '\0'; ptr++);
  ptr--;
  lptr = str;
  while(ptr >= lptr)
  {
    if(*ptr != *lptr)
    {
      printf("It is not a pallindrome.");
      return 0;
    }
    ptr--;
    lptr++;
  }
  
  printf("It is a pallindrome.");
  return 0;
}