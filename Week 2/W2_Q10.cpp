#include <iostream>
#include <numeric>
#include <vector>
#include <iomanip>
using namespace std;
int main()
{
    int n; cin>>n;
    vector<double> vectorA(n),vectorB(n);
    for(int i=0;i<n;i++)
    {
        cin>>vectorA[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>vectorB[i];
    }
    cout<<setprecision(2)<<fixed<<inner_product(vectorA.begin(), vectorA.end(), vectorB.begin(), 0.0);
}
