#include <iostream>

using namespace std;

int main()
{
    int x,y,sum=0;
    cin>>x>>y;
    if (y>x)
    {
        for(int i=x+1;i<y;i++)
        {
            sum=sum+i*i*i;
        }
    }
    else
    {
        for(int i=y+1;i<x;i++)
        {
            sum=sum+i*i*i;
        }
    }
    cout<<sum;

    return 0;
}
