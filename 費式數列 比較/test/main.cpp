#include <iostream>
#include <ctime>
using namespace std;
double rec(int a)
{
    if(a==1||a==2)
        return 1;
    else//if(a>=3)
        return rec(a-1)+rec(a-2);
}
int main()
{
    int a;
    clock_t start,fin;
    cin>>a;
    start=clock();
    cout<<rec(a)<<endl;
    fin=clock();
    cout<<"所需要的時間 : "<<(double)(fin-start)/(double)CLOCKS_PER_SEC<<endl;

}
