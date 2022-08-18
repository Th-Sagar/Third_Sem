#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

float f(float x)
    { return (3*x*x-6*x+2 );
    }

int main()
{
    float x1,x2,x0,f1,f2,f0,e=0.005;
    cout<< "enter the initial guess x1 and x2:";
    cin>>x1>>x2;
    while(1)
    {
        f1=f(x1);
        f2=f(x2);
        x0=(x1+x2)/2;
        f0=f(x0);
        if(fabs(f0)<e)
        {
            break;
        }
        if(f1*f0<0)
        {
            x2=x0;
        }
        else
        {
            x1=x0;
        }
    }
    
    cout<<"nthe root of the equation ="<<x0;
}