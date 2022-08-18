#include<iostream>
#include<math.h>
using namespace std;
float fn(float x)
{
return(exp(-x)-3*x);
}
float fm(float x)
{
return((-exp(-x))-3);
}
int main()
{
float a,z;
cout<<"enter the no:";
cin>>a;
while(1){

z=a-(fn(a)/fm(a));

if(fabs(z-a)<0.01)
{
break;
}
a=z;
cout<<endl;
}

cout<<z;
}
