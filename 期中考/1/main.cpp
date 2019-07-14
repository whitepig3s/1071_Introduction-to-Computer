#include <iostream>
using namespace std;

int main()
{
    int input,sum=0;
    cin>>input;
    for (int i=1;i<=input;i++)
    {
        if (input%i==0)
        {
            sum=sum+i;
        }
    }
    cout<<sum;
    return 0;
}
