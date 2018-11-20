#include <iostream>

using namespace std;

int main()
{
  int a=0;
  int b=0;
  double m=0;
  while(a>=-1)
  {

        cout<<"Enter hours worked(-1 to end):";
        cin>>a;
        if(a==-1)
        {
            break;
        }
        else
        {


            cout<<"Enter hourly rate of the employee($00.00):";
            cin>>b;
        if(a<=40)
        {
            m=a*b;
            cout<<"Salary is $"<<m<<endl;
        }
            else
                m=(a-40)*b*1.5+40*b;
                cout<<"Salary is $"<<m<<endl;
        }

  }
}
