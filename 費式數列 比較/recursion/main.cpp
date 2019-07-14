#include <iostream>
#include <time.h>       /* clock_t, clock, CLOCKS_PER_SEC */
using namespace std;

double Fi (int in)
{
    double out =0;
    if (in==1||in==2)
        return 1;
    else
        return Fi(in-1)+Fi(in-2);
}


int main ()
{
    //要另外計算時間的原因:
    //在編譯的時候會耗掉多數的時間 造成計算數列時間上的誤差
    int input;
    clock_t t;
    cout<<"費氏數列"<<endl;
    cin>>input;

    t = clock();
    cout<<endl<<"Calculating..."<<endl;
    cout<<Fi (input)<<endl;

    t = clock() - t;
    cout<<"Time: "<<((float)t)/CLOCKS_PER_SEC<<"s"<<endl;
    return 0;
}
