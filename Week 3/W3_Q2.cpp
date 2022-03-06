#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
int main()
{
    int n; cin>>n;
    double a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=n-1;i>=0;i--)
    {
        cout<<setprecision(2)<<fixed<<a[i]<<" ";
    }
}
