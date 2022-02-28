#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double fraction(double n)
{
    if(n==1) return 1;
    else return n*fraction(n-1);
}
int main()
{
    double x; cin>>x;
    double old_sum=1;
    double new_sum=1+x;
    double temp=2;
    while(new_sum-old_sum>0.001)
    {
        old_sum=new_sum;
        new_sum=new_sum+pow(x,temp)/fraction(temp);
        temp++;
    }
    cout<<setprecision(4)<<fixed<<new_sum;
}
