#include <iostream>

using namespace std;

int main()
{
    char in;
    cin>>in;
    //int tmp=in-'A'+1;  //¦¸¼Æ
    for(int i='A'; i<=in; i++)
    {
        for(int j=1 ; j<=i-'A'+1; j++)
        {
            cout<<(char)i;
        }
            cout<<endl;




    }
    return 0;
}
