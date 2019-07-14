#include <iostream>
#include <time.h>
#include <cstdlib>
int randnb (void)
{
    int randnum =rand()%100;

}
using namespace std;

int main()
{
    srand(time(0));
    int in;
    cin>>in;
    for (int i=0;i<in;i++)
    {
        cout<<randnb()<<" ";
    }

    return 0;
}
