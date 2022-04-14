#include <iostream>

using namespace std;

// Fibonacci Num : 0 , 1 , 1 , 2 , 3 , 5, 8 , 13

int main()
{
    int a;
    cin>>a;
    int d;
    
    int b=0,c=1;
    
    if(a<=0)
    {
        cout<<"No Fibonacci Num";
    }
    else if (a==1)
    {
        cout<<0;
    }
    else if (a==2)
    {
        cout<<1;
    }
    else
    {
       // d = b +c;
        cout<<b<<" "<<c<<" ";
        for (int i=3; i<=a;i++)
        {
            d = b+c;
            cout<<d<<" ";
            b = c;
            c = d;
            
        }
    }

    return 0;
}
