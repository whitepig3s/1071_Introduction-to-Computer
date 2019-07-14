#include <conio.h>
#include <iostream>
using namespace std;

int main()
{
    int pass[5]={0},in[5]={0},check[5]={0};
    int pwd;
    cin>>pwd;
    for (int i=3; i>=0; i--)
    {
        pass[i]=pwd%10;
        pwd=(pwd-pass[i])/10;
        //cout<<pass[i]<<endl;
    }
    int re=0;
    for (int i=0; i<4; i++)
    {
        in[i]=getch();
        cout<<"*";
        int tmp=in[i]-'0';
    //cout<<pass[i]<<" "<<tmp<<endl;
        if (tmp!=pass[i])
        {
            check[i]=1;
            re=re+check[i];
        }
    }
        //cout<<re<<endl;
        if (re==0)
            cout<<"correct";
        else
            cout<<"error";
    return 0;
}
