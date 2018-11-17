#include <iostream>

using namespace std;

int main()
{
    int product=1;
    int a=1;
    for(a;a<=15;a+=2)
    {
        product=product*a;
        if(a==5)
            break;
    }
    cout<<"Product is"<<product<<endl;
    return 0;
}
