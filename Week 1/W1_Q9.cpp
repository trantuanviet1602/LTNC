#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    float a,b,c,size;
    cin>>a>>b>>c;
    if(a>0&&b>0&&c>0&&a+b>c&&b+c>a&&c+a>b)
    {
        size=0.25*sqrt((a+b+c)*(a+b-c)*(b+c-a)*(c+a-b));
        cout<<setprecision(2)<<fixed<<size;
    }
    else cout<<"invalid";
    return 0;
}
