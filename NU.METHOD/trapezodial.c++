#include<iostream>
#include<math.h>
using namespace std;
float func( float y)
{
	return exp(y);
}
int main()
{
	int n,i;
	float upper_limit,lower_limit,h,x[100],p=0,sum=0,final=0;
	cout<<"Enter Upper limit";
	cin>>upper_limit;
	cout<<"Enter Lower limit";
	cin>>lower_limit;
	cout<<"Enter No";
	cin>>n;
	h=(fabs(upper_limit-lower_limit)/n);
	for(i=0;i<=n;i++)
	{
		x[i]=lower_limit+h*i;
	}
	
	for(i=0;i<=n;i++)
	{
		cout<<"\n"<<x[i];
	}
	
	
	for(i=0;i<=n;i++)
	{
		if (i==0 || i==n)
		{
			p=x[i];
			sum=sum+func(p);
		}
		else
		{
			p=x[i];
			sum=sum+2*func(p);
		}
	}
	final=(sum*h)/2;
	cout<<"\nThe value is :"<<final;
}