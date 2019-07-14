#include <iostream>

using namespace std;

int main()
{
    int in;
    cin>>in;
    in=(in*2)-1;
    for (int i=0;i<in;i++)
    {
        for (int j=0;j<in;j++)
        {
            if ((i==j)||(i+j==in-1))
                cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
