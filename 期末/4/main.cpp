#include <iostream>
#include <string>
#define M 20
using namespace std;

int main()
{
    char str[M];
    string str2;
    cin.getline(str,M);
    str2=str;
    int si=str2.length();
    int coun=0;
    for (int i=0; i<si; i++)
    {
        if (si%2==1)
        {
            if (str2[i]!=str2[si-i-1])
                coun++;
        }
        else
        {
            if (str2[i]!=str2[si-i])
                coun++;
        }
    }
    if (coun==0)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
