#include <iostream>
#include <time.h>
using namespace std;

int main ()
{
    int input;
    clock_t t;
    cout<<"費氏數列 (非遞迴運算)"<<endl;
    cin>>input;

    t = clock();
    cout<<endl<<"Calculating..."<<endl;
    double Fi[input+1]= {0,1,1};
    for (int i=3; i<=input; i++)
    {
        Fi[i]=Fi[i-1]+Fi[i-2];
    }
    t = clock() - t;
    cout<<Fi[input]<<endl;
    cout<<"Time: "<<((float)t)/CLOCKS_PER_SEC<<"s"<<endl;
    return 0;
}
