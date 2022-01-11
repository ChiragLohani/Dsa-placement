#include<stdio.h>
#include<stdlib.h>
int main()
{
  int n, place, a;

  printf("Enter number of rows: ");
  scanf("%d",&n);
  
  for(int i=1; i< 2*n; i++)
  {
    a=n-1;

    if(i < n) place=i;
    else place = abs(2*n-i);
    
    for(int j=1; j<=place; j++)
    printf("%d",a--);

    printf("\n"); 
  }

  return 0;
}
