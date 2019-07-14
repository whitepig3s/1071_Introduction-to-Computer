#include <iostream>

using namespace std;

int main()
{
    int w,x,y,z;
    cin>>w>>x>>y>>z;
    for(int i=w;i<=x;i++)
    {
        if(i%y==0)
        {
            if(i%z!=0)
                cout<<i<<' ';
        }
    }
    return 0;
}
