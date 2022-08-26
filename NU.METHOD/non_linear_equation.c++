#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	float x[100],y[100],sumx=0,sumy=0,xy=0,b=0,a=0,x2=0;
	int i,n;
	cout<<"Enter n:";
	cin>>n;
	cout<<"enter x :";
	for(i=0;i<n;i++) 
	{
		cin>>x[i];
	}
	cout<<"enter y :";
	for(i=0;i<n;i++) 
	{
		cin>>y[i];
	}
	
	for(i=0;i<n;i++)
	{
		sumx=sumx+x[i];
		sumy=sumy+(log(y[i]));
		xy=xy+x[i]*log(y[i]);
		x2=x2+x[i]*x[i];
	}
	cout<<"\nsumx = "<<sumx;
	cout<<"\nsumy = "<<sumy;
	cout<<"\nProduct = "<<xy;
	cout<<"\nx2 = "<<x2;
	b=((n*xy)-(sumx*sumy))/((n*(x2))-(sumx*sumx));
	cout<<"The value of b : "<<b;
	float A;
	A=(sumy/n)-((b*sumx)/n);
	a=exp(A);
	cout<<"\nThe value of a :"<<a;
	
	
	
	

}