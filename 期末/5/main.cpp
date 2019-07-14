#include <iostream>

using namespace std;

int main()
{
    int x=0,y=0;
    char in[3][3];
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            cin>>in[i][j];
        }
    }

    for (int i=0; i<3; i++)
    {
        if ((in[i][0]==in[i][1])&&(in[i][1]==in[i][2]))
        {
            if (in[i][0]=='X')
                x=x+1;
            else if (in[i][0]=='X')
                y=y+1;
        }
        if ((in[0][i]==in[1][i])&&(in[1][i]==in[2][i]))
        {
            if (in[0][i]=='X')
                x=x+1;
            else if (in[0][i]=='X')
                y=y+1;
        }
    }
if ((in[0][0]==in[1][1])&&(in[1][1]==in[2][2]))
{
            if (in[0][0]=='X')
                x=x+1;
            else if (in[0][0]=='X')
                y=y+1;
        }
if ((in[0][2]==in[1][1])&&(in[1][1]==in[2][0]))
{
            if (in[0][2]=='X')
                x=x+1;
            else if (in[0][2]=='X')
                y=y+1;
        }

    /*for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            cout<<in[i][j];
        }
        cout<<endl;
    }*/
    if (x>y)
        cout<<"X";
    else if (x<y)
        cout<<"Y";
    else
        cout<<"NO";

    return 0;
}
