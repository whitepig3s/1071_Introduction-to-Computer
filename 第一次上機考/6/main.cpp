#include <iostream>

using namespace std;

int main()
{
    int n,k;
    float s=0;
    cin>>n>>k;
    for(int i=k;i<=n;i++)
    {
        float tmp=(float)1/i;
        s=s+tmp;
        //cout<<(float)(1/i)<<endl;
    }
    cout<<"s="<<s;
    return 0;
}
