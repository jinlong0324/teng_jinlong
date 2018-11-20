#include <iostream>

using namespace std;

int main()
{
    int N = 0;
   cout << "N\t10*N\t100*N\t1000*N\n\n";

   while ( ++N <= 5 )
   {
      cout << N << '\t' << 10 * N << '\t' << 100 * N<< '\t' << 1000 * N << '\n';
   }
}
