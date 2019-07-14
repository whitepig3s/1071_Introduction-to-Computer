#include <iostream>

using namespace std;

int main()
{
    int in;
    cin>>in;
    int temp=in-2;
    for (int i=0;i<=in/2;i++)
    {
        for (int j=0;j<i;j++)  //輸出空格
        {
            cout<<" ";
        }
        cout<<"@";
        for (int k=temp;k>=1;k--)
        {
            cout<<" ";
        }
        if (in/2!=i)
            cout<<"@";
        cout<<endl;
        temp=temp-2;
    }

    temp=1;
    for (int i=(in/2)-1;i>=0;i--)
    {
        for (int j=0;j<i;j++)  //輸出空格
        {
            cout<<" ";
        }
        cout<<"@";
        for (int k=1;k<=temp;k++)
        {
            cout<<" ";
        }
            cout<<"@";
        cout<<endl;
        temp=temp+2;
    }
    return 0;
}
