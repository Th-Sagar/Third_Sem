#include<iostream>
#include<cmath>
using namespace std;
float fun(float x)
{ 
    return ((x*x+2)/3);
}
int main()
{
    float x1,x2,f1,f2,e=0.005;
    cout<<"enter the initial guesses";
    cin>>x1;
    while(1)
    {
        f1=fun(x1);
        
        if(fabs(f1-x1)<e)
        {
            break;
        }
        x1=f1;
        
    }
    cout<<"the root of equation is:"<<x1;
}