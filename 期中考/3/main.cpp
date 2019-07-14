#include <iostream>

using namespace std;

int main()
{
    int i=1,con=0;

    for (;con<=1;i++)
    {
        if ((i%3==1)&&(i%5==3)&&(i%7==2))
            {
                cout<<i<<endl;
                con++;
            }
    }
    return 0;
}
