#include<iostream>
#include<cmath>
using namespace std;

float fun(float x)
{
    return (cos(x)-x*exp(x));
}
int main()
{
    float x1,x2,f1,f2,x0,f0,e=0.05;
    cout<<"Enter the initial guesses";
    cin>>x1>>x2;
    while(1)
    {
        f1=fun(x1);
        f2=fun(x2);
        x0=((x1*fun(x2)-x2*fun(x1))/(fun(x2)-fun(x1)));
        f0=fun(x0);
        if(fabs(f0)<e)
        {
            break;
        }
        if (f1*f0<0)
        {
            x2=x0;
        }
        else
        {
            x1=x0;
        }
    }
    cout<<"The root of equation is:"<<x0;
}