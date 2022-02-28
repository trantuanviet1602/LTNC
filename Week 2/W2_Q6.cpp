#include <iostream>
using namespace std;
int main()
{
    int n; cin>>n;
    int temp1,temp2;
    for(int i=-n;i<=n;i++)
    {
        for(int j=-n;j<=n;j++)
        {
            if(i<=0)
            {
                temp1=i;
                if (j >= -(n + temp1) && j <= n + temp1)
                    {
                        cout<<"* ";
                    }
                    else
                    {
                        cout<<". ";
                    }
            }
            else
            {
                temp2=-i;
                if (j >= -(n + temp2) && j <= n + temp2)
                    {
                        cout<<"* ";
                    }
                    else
                    {
                        cout<<". ";
                    }
            }
        }
        cout<<endl;
    }
}
