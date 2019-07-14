#include <iostream>

using namespace std;

int main()
{
    unsigned int a1,a2,b1,b2,o1,o2;
    cin>>hex>>a1>>a2;
    cin>>hex>>b1>>b2;
    o1=a1+b1;
    o2=a2+b2;
    if (o2<b2||o2<a2)
        o1=o1+1;
    cout<<hex<<o1<<" "<<o2;

    return 0;
}
