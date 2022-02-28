#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int max,min; cin>>min>>max;
    for(int i=sqrt(min);i<=sqrt(max);i++)
    {
       if(i*i>=min) cout<<i*i<<" ";
    }
}
