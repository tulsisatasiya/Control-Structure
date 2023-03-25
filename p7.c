#include <stdio.h>
int main()
{
    int a,b,c,d,e;
  
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);
  
    printf("Enter 3th number: ");
    scanf("%d",&c);
  
    printf("Enter 4th number: ");
    scanf("%d",&d);
    printf("Enter 5th number: ");
    scanf("%d",&e);
  
    int max = a;
  
    max = (b > max)? b: max;
    max = (c > max)? c: max;
    max = (d > max)? d: max;
    max = (e > max)? e: max;
    printf("\nMax is %d", max);
  
    return 0;
}
