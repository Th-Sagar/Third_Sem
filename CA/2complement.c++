#include<iostream>
using namespace std;
int AND(int x, int y)
    {
        if( x==1 && y==1)
        {
            return 1;
        }
        else
        {

        return 0;
        }
    }

int OR(int x, int y)
    {
        if( x==0 && y==0)
        {
            return 0;
        }
        else
        {

            return 1;
        }
}
int NOT(int x)
    {
        if( x==0)
        {
            return 1;
        }
    else
        {

            return 0;
        }
}
int XOR(int x, int y)
    {
        return(OR(AND(x,NOT(y)),AND(y,NOT(x))));
    }

int sum(int x, int y,int z)
{
    return(XOR(XOR(x,y),z));
}
int carry( int x, int y, int z)
{
    return (OR(OR(AND(x,y),AND(x,z)),AND(y,z)));
}
int main()
{
    int a[100],q,inv[100],bb=1,p=0,c=0,n,i,comp[100];
    cout<<"Enter n:";
    cin>>n;
    cout<<"Enter A: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Inverse :";
    for(i=0;i<n;i++)
    {
        p=a[i];
        inv[i]=NOT(p);
        cout<<inv[i];
    }
       
    for(i=n-1;i>=0;i--)
    {
        q=inv[i];
        comp[i]=sum(q,bb,c);
        c=carry(q,bb,c);
        bb=0;
        
    }
    cout<<"\nComplement :";
    for(i=0;i<n;i++)
    {
        cout<<comp[i];
    }

}