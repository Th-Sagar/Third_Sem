#include <iostream>
using namespace std;
int AND(int x, int y)
{
    if (x == 1 && y == 1)
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
    if (x == 0 && y == 0)
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
    if (x == 0)
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
    return (OR(AND(x, NOT(y)), AND(y, NOT(x))));
}
int sum(int x, int y, int z)
{
    return (XOR(XOR(x, y), z));
}
int carry(int x, int y, int z)
{
    return (OR(OR(AND(x, y), AND(x, z)), AND(y, z)));
}
int cmp( int x)
{ 
    return (NOT(x));
}
int main()
{
    int a, b, c = 0, n, i, q, ra[100], qb, rb[100], ps, qs,as,bs,rbc[100],ans[100],rbbs,anss[100];
    cout << "enter a" << endl;
    cin >> a;
    cout << "Enter b :" << endl;
    cin >> b;
    cout << "enter as" << endl;
    cin >> as;
    cout << "Enter bs :" << endl;
    cin >> bs;
    cout << "Enter n for loop:";
    cin >> n;


    // 0 for positive and 1 for negative
    if(as==bs)
    {
        q = a;
        // reverse a
        for (i = 0; i < n; i++)
        {
            ra[i] = q % 10;
            q = q / 10;
        }
        qb = b;
        // reverse b
        for (i = 0; i < n; i++)
        {
            rb[i] = qb % 10;
            qb = qb / 10;
        }
        c=0;
        if( as==0)
        {   
            cout<<"the sign is + and the answer is:"<<endl;
           for (i = 0; i < n; i++)
            {
                int ps = ra[i];
                int qs = rb[i];
                
                ans[i]=sum(ps, qs, c);
                c = carry(ps, qs, c);
               
            }
            for(i=n-1;i>=0;i--)
            {
                cout<<ans[i];
            }
        }
        else
        {
            cout << "the sign is - and the answer is:" << endl;
            for (i = 0; i < n; i++)
            {
                int ps = ra[i];
                int qs = rb[i];
                
                ans[i]=sum(ps, qs, c);
                c = carry(ps, qs, c);
            }
            for (i = n - 1; i >= 0; i--)
            {
                cout << ans[i];
            }
        }
        
    }
    
       
    else
    {
        q = a;
        // reverse a
        for (i = 0; i < n; i++)
        {
            ra[i] = q % 10;
            q = q / 10;
        }
        qb = b;
        // reverse b
        for (i = 0; i < n; i++)
        {
            rb[i] = qb % 10;
            qb = qb / 10;
        }


        //comp b
        for (i = 0; i < n; i++)
        {
            int qs = rb[i];
            rbc[i] = cmp(qs);
        
        }
        c=1;   
        for (i = 0; i < n; i++)
        {
            int ps = ra[i];
            int qs = rbc[i];
            ans[i] =sum(ps, qs, c) ;
            c = carry(ps, qs, c);
        }
        if(c==1)
        { 
            
            cout << "the sign is + and the answer is "<<endl;
            for (i = n - 1; i >= 0; i--)
            {
                cout << ans[i];
            }
        }
        // 0 for positive and 1 for negative
        else
        {
            cout << "the sign is - and the answer is "<<endl;
            for(i=0;i<n;i++)
            {
                rbbs =ans[i];
                rbc[i]=cmp(rbbs);
              
                
            }
            c = 1;
            for (i = 0; i < n; i++)
            {
                int qs = rbc[i];
                anss[i] = sum(0, qs, c);
                c = carry(0, qs, c);
              
            }
            for (i = n - 1; i >= 0; i--)
            {
                cout << anss[i];
            }
        }
    }
   
}
