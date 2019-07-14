#include <iostream>
#define M 20
using namespace std;

int main()
{
    int time,num[M];
    cin>>time;
    for (int i=0; i<time; i++)
        cin>>num[i];

    for (int i=0; i<time; i++)
    {
        int count =0;
        for (int j=0;j<time;j++)
        {
            if (num[j]>num[i]){
                count++;
            }
        }
        //cout<<count<<endl;
        if(count==(time/2))
        {
            cout<<num[i]<<endl;
            break;
        }
    }

    return 0;
}
