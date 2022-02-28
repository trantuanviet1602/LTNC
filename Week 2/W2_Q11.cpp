#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    double sum=0;
    int n; cin>>n;
    double arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    sum=sum/n;
    double mean=0;
    for(int i=0;i<n;i++)
    {
        mean=mean+pow((arr[i]-sum),2);
    }
    mean=mean/n;
    cout<<setprecision(2)<<fixed<<mean;
}
