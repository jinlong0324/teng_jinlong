#include <iostream>

using namespace std;

int main()
{
    int a=0;
    int average=0;
    int n=1;
    int sum=0;
    for(a;a<9999;++n)
    {
        cin >>a;
        sum=sum+a;
        average=sum/n;
        if(a==9999)
            break;
        cout<<endl;
    }
    cout<<"Average is"<<average<<endl;
    return 0;
}
