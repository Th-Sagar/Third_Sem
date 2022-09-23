#include<stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){

float x[20],y[100], f,s,h, d, p;
int i,j,n;

printf ("Enter the value of n"); 
scanf("%d",&n);
printf("\nEnter the elements of:"); 
for (i=1;i<=n;i++)
{
    scanf("%f",&x[i]);
}
printf("Enter the elements of y:");
for (i=1;i<=n;i++)
{
    scanf("%f",&y[i]);
}

h=x[2]-x[1];
printf("Enter the value of f");
scanf("%f",&f);
s=(f-x[1])/h;
p=1;
d=y[1];
for(i=1;i<=n;i++)
{
    for(j=1;j<=n-i;j++)
    {
        y[j]=y[j+1]-y[j];
    }
    p=p*(s-i+1)/i;
    d=d+p*y[1];

}
printf("The value of y is %f",d);

}