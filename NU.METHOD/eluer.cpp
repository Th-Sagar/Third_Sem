#include <iostream>
using namespace std;
#include <math.h>
float f(float x ,float y){
    return(x* y);
}
int main()
{
    float x0, y0, n, x, xn;
    float h, slope, y;
    cout<<"Enter the initial guess x0: ";
    cin>>x0;
    cout<<"Enter th);e initial guess y0: ";
    cin>>y0;
    cout<<"Enter the calculation point: ";
    cin>>xn;
    h = 0.25;
    y = y0;
    x = x0;

    for (float x = 1; x < 2; x = x + h)
    {
        slope = f(x, y);
        y = y + (slope * h);
    }
    cout<<"The value of y at x= " << xn << " is " << y;
}
