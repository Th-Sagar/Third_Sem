#include<stdio.h>
char NOT(char x)
    {
        if( x=='0')
        {
            return '1';
        }
    else
        {

            return '0';
        }
}
int main()
{
char a,b,c;
printf("Enter number A :");
scanf("%c",&a);
printf("\nThe value NOT %c  = %c ",a,NOT(a));
}
