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
    int a,b,c=0,n,i,q,ra[100],qb,rb[100],ps,qs;
   cout<<"enter a"<<endl;
   cin>>a;
   cout<<"Enter b :"<<endl;
   cin>>b;
   cout<<"Enter n for loop:";
   cin>>n;
   q=a;
   //reverse a
   for(i=0; i<n; i++)
   { 
   	 ra[i]=q%10;
   	 q=q/10;
   	 
   }
   qb=b;
   //reverse b
    for(i=0; i<n; i++)
   { 
   	 rb[i]=qb%10;
   	 qb=qb/10;
   	 
   }
   cout<<"the output";
   for(i=0;i<n;i++)
   {
   	cout<<ra[i];
   }
   cout<<endl;
     for(i=0;i<n;i++)
   {
   	cout<<rb[i];
   }
      for(i=0;i<n;i++)
   {
    int ps=ra[i];
    int qs=rb[i];
       cout<<"\n a["<<i<<"] and b["<<i<<"]";
       cout<<sum(ps,qs,c)<<endl;
       c=carry(ps,qs,c);
   }
   
//   cout<<"Enter A:\n";
//    for(i=0;i<n;i++)
//    {
//        cout<<"Enter a["<<i<<"]";
//        cin>>a[i];
//    }
//    for(i=0;i<n;i++)
//    {
//        cout<<endl;
//        cout<<"Enter b["<<i<<"]";
//        cin>>b[i];
//    }
//
//    cout<<"Sum is :"<<endl;
//   for(i=n-1;i>=0;i--)
//   {
//    int p=a[i];
//    int q=b[i];
//       cout<<"\n a["<<i<<"] and b["<<i<<"]";
//       cout<<sum(p,q,c)<<endl;
//       c=carry(p,q,c);
   






}
