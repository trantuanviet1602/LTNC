#include <iostream>
using namespace std;
int main()
{
    int n; cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
        if(b[i]==a[i]) count++;
    }
    if(count==n) cout<<"YES";
    else cout<<"NO";
}
