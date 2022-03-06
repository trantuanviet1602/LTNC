#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;
int main()
{
    int n; cin>>n;
    double a[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>a[n];
    sort(a,a+n+1);
    for(int i=0;i<n+1;i++)
    {
        cout<<setprecision(2)<<fixed<<a[i]<<" ";
    }
}
