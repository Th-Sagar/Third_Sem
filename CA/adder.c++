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
int ADD_SUM(int x,int y)
{
   int sa,ca,c=0;
    
    sa=sum(x,y,c);
    ca=carry(x,y,c);

    return sa;

}
int ADD_CARRY(int x,int y)
{
   int sa,ca,c=0;
    
    sa=sum(x,y,c);
    ca=carry(x,y,c);

    return ca;
   


}


int main()
{
    int a[100],b[100],c=0,n,i;
    cout<<"Enter n:";
    cin>>n;
    cout<<"Enter A: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter B: ";
    for(i=0;i<n;i++)
    {
        cin>>b[i];
    }
    cout<<"Sum: ";
    for(i=0;i<n;i++)
    {
        int p=a[i];
        int q=b[i];
        cout<<ADD_SUM(p,q);
    }
    cout<<"\nCarry: ";
    for(i=0;i<n;i++)
    {
        int p=a[i];
        int q=b[i];
        cout<<ADD_CARRY(p,q);
    }
   
   
}
