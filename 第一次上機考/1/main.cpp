#include <iostream>
using namespace std;

int main()
{
    int pri;
    cin>>pri;
    if (pri>=100&&pri<=299)
        pri=pri*0.95;
    else if (pri>=300&&pri<=499)
        pri=pri*0.92;
    else if (pri>=500&&pri<=999)
        pri=pri*0.9;
    else if (pri>=1000)
        pri=pri*0.85;
    cout<<"price: "<<pri;

    return 0;
}
