#include<iostream>
#include<cmath>
using namespace std;
float fn(float x)
{
return (cos(x)+2*(sin(x))+x*x);
}
int main()
{
float x0,x1,x2,f0,f1,f2,e=0.005;
cout<<"enter the initial guesses";
cin>>x0>>x1;
while(1)
{
f0=fn(x0);
f1=fn(x1);
x2=x1-(x1-x0)*f1/(f1-f0);
f2=fn(x2);
if(fabs(f2)<e)
{
    break;
}

x0=x1;
f0=f1;
x1=x2;
f1=f2;


}
cout<<"the root of equation is:"<<x2;

}
