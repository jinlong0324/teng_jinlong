#include <iostream>

using namespace std;

int main()
{
    int a=0;
    int b=0;
    double M=0;
    double X=0;
    int m=0;
    int g=0;

    while(a>=-1)
    {
        cout<<"Enter miles driven(-1 to quit):";
        cin>>m;
        if(m==-1)
        {
            break;
        }
        else
        cout<<"Enter gallons used:";
        cin>>g;
        M=m/g;
        cout<<"MPG this trip:"<<M<<endl;
        a=a+g;
        b=b+m;
        X=b/a;
        cout<<"Total MPG: "<<X<<endl;


    }
    return 0;




}

