#include<stdio.h>
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

int main()
{
char a,b,c;
printf("Enter number A :");
scanf("%c",&a);
printf("Enter number B :");
fflush(stdin);
scanf("%c",&b);
printf("\nThe value %c OR %c = %c ",a,b,OR(a,b));


}
