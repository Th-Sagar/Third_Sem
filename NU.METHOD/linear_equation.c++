#include<iostream>
using namespace std;
int main()
{
    int i;
    float n,x[10],y[10],X=0,Y=0,Xx=0,XY=0;
    float a=0,b=0;
    cout<<"Enter the n :";
    cin>>n;
    cout<<"\nEnter the elements of x";
    for(i=0;i<n;i++)
    {
    cin>>x[i];
    }
    cout<<"\nEnter the elements of y";
    for(int i=0;i<n;i++)
    {
        cin>>y[i];
    }
    for(i=0;i<n;i++)
    {
        X=X+x[i];
        Y=Y+y[i];
        Xx=Xx+(x[i]*x[i]);
        XY=XY+(x[i]*y[i]);
    }
    cout<<"\nx: "<<X;
    cout<<"\nx square: "<<Xx;
    cout<<"\nx*y:"<<XY;
    b=(n*XY-X*Y)/(n*Xx-X*X);
    cout<<"\nb: "<<b;
    a=(Y/n)-b*(X/n);
    cout<<"\nb: "<<a;


return 0;
}
