#include <iostream>
#include <time.h>       /* clock_t, clock, CLOCKS_PER_SEC */
using namespace std;

double Fi (int in)
{
    double out =0;
    if (in==1||in==2)
        return 1;
    else
        return Fi(in-1)+Fi(in-2);
}


int main ()
{
    //�n�t�~�p��ɶ�����]:
    //�b�sĶ���ɭԷ|�ӱ��h�ƪ��ɶ� �y���p��ƦC�ɶ��W���~�t
    int input;
    clock_t t;
    cout<<"�O��ƦC"<<endl;
    cin>>input;

    t = clock();
    cout<<endl<<"Calculating..."<<endl;
    cout<<Fi (input)<<endl;

    t = clock() - t;
    cout<<"Time: "<<((float)t)/CLOCKS_PER_SEC<<"s"<<endl;
    return 0;
}
