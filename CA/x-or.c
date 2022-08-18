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

char OR(char x, char y)
    {
        if( x=='0' && y=='0')
        {
            return '0';
        }
        else
        {

            return '1';
        }
}
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
char XOR(char x, char y)
    {
        return(OR(AND(x,NOT(y)),AND(y,NOT(x))));
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
printf("\nThe value %c OR %c = %c ",a,b,OR(a,b));
printf("\nThe value NOT %c  = %c ",a,NOT(a));
printf("\nThe value %c X-OR %c = %c ",a,b,XOR(a,b));


}
