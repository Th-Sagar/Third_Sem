#include <iostream>
using namespace std;
float f1(float x, float y, float z)
{
    return z;
}

float f2(float x, float y, float z)
{
    return 6 * x;
}

int main()
{
    float x1, x2, y1, y2, h, z1, y, z, x, m1, m2, yn, b[100], m[100],m3=0;
    int i=1, n, j = 1;
    cout << "Enter x1,y1,x2,y2  ";
    cin >> x1 >> y1 >> x2 >> y2;
    cout << "Enter h  ";
    cin >> h;
    float bn=y1;
    while (j <=2)
    {
        cout << "Enter z  ";
        cin >> z1;
        m[j] = z1;
        
        y=0;
        y1=bn;
       
        for (float x = 1.5; x <=2; x = x + h)
        {
            if(x==2)
            {
                yn = y + z * h;
                b[i] = yn;
                y1 = yn;
                cout << x << "\t" << yn << endl;
                i++;
            }
            else
            {
            y = y1 + (f1(x,y1,z1) * h);
            cout << x << "\t" << y << endl;
            z=z1+f2(x1,y1,z1)*h;
            cout << x << "\t" << z << endl;
            }
            
           
        }

        j++;
    }
    
    m3= m[2]-((b[2]-y2)/(b[2]-b[1]))*(m[2]-m[1]);
    cout<<"The m3 value is "<<m3<<endl;
    z1=m3;
    y = 0;
    y1 = bn;
    for (float x = 1.5; x <= 2; x = x + h)
    {
        if (x == 2)
        {
            yn = y + z * h;
            b[i] = yn;
            y1 = yn;
            cout << x << "\t" << yn << endl;
            i++;
        }
        else
        {
            y = y1 + (f1(x, y1, z1) * h);
            cout << x << "\t" << y << endl;
            z = z1 + f2(x1, y1, z1) * h;
            cout << x << "\t" << z << endl;
        }
    }
}