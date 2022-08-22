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
char sum(char x, char y,char z)
{
    return(XOR(XOR(x,y),z));
}
char carry( char x, char y, char z)
{
    return (OR(OR(AND(x,y),AND(x,z)),AND(y,z)));
}
int main()
{
    char a,b,c;
    printf("Enter number A :");
    scanf("%c",&a);
    printf("Enter number B :");
    fflush(stdin);
    scanf("%c",&b);
    printf("Enter number C :");
    fflush(stdin);
    scanf("%c",&c);
    printf("\nThe full adder sum of %c,  %c and %c = %c ",a,b,c,sum(a,b,c));
    printf("\nThe full adder carry of %c,  %c and %c = %c ",a,b,c,carry(a,b,c));


}
