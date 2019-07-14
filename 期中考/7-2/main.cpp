#include <iostream>
using namespace std;

int main()
{
    int bin [3][3]= {0};
    int input,bingo=0;

    for (int i=0; i<=2; i++)
    {
        cin>>input;
        if (input==111)
            bingo++;
        for (int j=2; j>=0; j--)
        {
            bin[i][j]=(input%2);
            input=(input-bin[i][j])/10;
        }
    }

    for (int i=0;i<=2;i++)
    {
        if ((bin[0][i]==bin[1][i])&&(bin[1][i]==bin[2][i])&&(bin[1][i]==1))
            bingo++;
    }
    if ((bin[0][0]==bin[1][1])&&(bin[1][1]==bin[2][2])&&(bin[1][1]==1))
        bingo++;
    if ((bin[0][2]==bin[1][1])&&(bin[1][1]==bin[2][0])&&(bin[1][1]==1))
        bingo++;
    if (bingo==0)
        cout<<"NO";
    else
        cout<<"BINGO";

    return 0;
}
