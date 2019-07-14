#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;

int randnb (void)
{
    int number=rand()%6;
    return number;
}

int main()
{
    srand(time(0));
    int count;
    int tmp[4]= {0};
    do
    {
        count =0;
        for (int i=0; i<4; i++)
        {
            tmp[i]=randnb()+1;
            cout<<tmp[i];
            for (int j=0;j<i;j++)
            {
                if (tmp[i]==tmp[j])
                count++;

            }
        }
        cout<<"  ";
    }while (count==0);

    return 0;
}
