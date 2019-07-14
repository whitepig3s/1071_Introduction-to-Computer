#include <iostream>

using namespace std;

int main()
{
    int in,maxn=0,nimn=0;
    do
    {
        cin>>in;
        if (in>maxn)
            maxn=in;
        else if (in<nimn)
            nimn=in;

    }while (in>0);
    cout<<"max:"<<maxn<<endl;
    cout<<"min"<<nimn;

    return 0;
}
