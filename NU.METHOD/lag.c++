// Lagrange interpolation 

#include<iostream>
using namespace std;
int main()
{
    float x[100],y[100],xp,yp=0,p;
    int i,j,n;
    cout<<"Enter the value of n:";
    cin>>n;
    cout<<"\nEnter value:\n";
    for(i=0;i<=n;i++)
    {
        cout<<endl<<"x["<<i<<"] = ";
        cin>>x[i];
        cout<<"y["<<i<<"] = ";
        cin>>y[i];
    }
    cout<<endl<<"Enter the interpolation point:";
    cin>>xp;
    for(i=0;i<=n;i++)
    {
        p=1;
        for(j=0;j<=n;j++)
        {
            if(i!=j)
            {
                p=p*((xp-x[j])/(x[i]-x[j]));
            }
        }
        yp=yp+p*y[i];
    }
    cout<<"The value is: "<<yp;
}