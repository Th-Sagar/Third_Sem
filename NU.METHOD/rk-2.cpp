#include <iostream>
using namespace std;
#include <math.h>

float f(float a, float b)
{
    return ((2 * b) / a);
}
int main()
{
    float x0, y0, x, m1 = 0, m2 = 0, xn;
    float h, slope, y;
    cout << "Enter the initial guess x0: ";
    cin >> x0;
    cout << "Enter the initial guess y0: ";
    cin >> y0;
    cout << "Enter the calculation point: ";
    cin >> xn;
    h = 0.25;
    x = x0;
    y = y0;

    for (float x = 1; x < 1.5; x = x + h)
    {
        m1 = f(x, y);
        m2 = f(x + h, y + (m1 * h));
        slope = (m1 + m2) / 2;
        y = (y + (slope * h));
        cout<<y<<endl;
    }
    cout << "The value of y at x= " << xn << " is " << y;
}
