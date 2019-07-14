#include <iostream>
#include <time.h>
#include <cstdlib>
#define M 52
using namespace std;
int randnbi (void)
{
    int number=rand()%4;
    return number;
}

int randnbj (void)
{
    int number=rand()%13;
    return number;
}

int main()
{
    srand(time(0));
    int p[5][14]= {0};
    for (int i=1; i<=4; i++)
    {
        for(int j=1; j<14; j++)
        {
            p[i][j]=100*i+j;
        }
    }

    cout<<"before"<<endl;
    for (int i=1; i<=4; i++)
    {
        for(int j=1; j<14; j++)
        {
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"after"<<endl;
    for (int i =0;i<=500;i++)
    {
        int a1=randnbi()+1,a2=randnbj()+1,b1=randnbi()+1,b2=randnbj()+1;

        int tmp=0;
        tmp=p[a1][a2];
        p[a1][a2]=p[b1][b2];
        p[b1][b2]=tmp;

    }
        for (int i=1; i<=4; i++)
    {
        for(int j=1; j<14; j++)
        {
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}
