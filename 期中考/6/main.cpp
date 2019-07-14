#include <iostream>

using namespace std;

int main()
{
    short in;
    cin>>in;
    if (in>=0)
    {
        for (int i=1; i<=8; i++)
        {
            if (in%2==0)
            {
                cout<<0;
            }
            else if(in%2==1)
            {
                cout<<1;
            }
            in=in>>1;
        }
    }
    else if (in<0)
    {
        for (int i=1; i<=8; i++)
        {
            if (in%2==0)
            {
                cout<<0;
            }
            else if(in%2==-1)
            {
                cout<<1;
            }
            in=in>>1;
        }

    }
    return 0;
}
