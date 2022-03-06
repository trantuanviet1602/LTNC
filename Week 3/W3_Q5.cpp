#include <iostream>
using namespace std;
int main()
{
    int n; cin>>n;
    int a[n]; int b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        b[n-1-i]=a[i];
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==b[i]) count++;
    }
    if(count==n) cout<<"Symmetric array.";
    else cout<<"Asymmetric array.";
}
