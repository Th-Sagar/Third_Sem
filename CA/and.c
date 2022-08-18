#include<stdio.h>
char AND(char x, char y)
    {
        if( x=='1' && y=='1')
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
printf("Enter number B :");
fflush(stdin);
scanf("%c",&b);
printf("The value %c AND %c = %c ",a,b,AND(a,b));



}
