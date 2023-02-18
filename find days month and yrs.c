#include <stdio.h>
int main()
{
int d,y,m,r,k;
printf("enter days");
scanf("%d",&d);
y=d/365;
r=d-365;
m= r/30;
k=r%30;
printf ("%d years %d month and %d days",y,m,k);
return 0;






}