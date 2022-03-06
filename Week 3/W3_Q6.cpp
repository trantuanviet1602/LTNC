#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s; getline(cin,s);
    s=" "+s;
    int count=0;
    for(int i=0;i<s.length()-1;i++)
    {
        if(s[i]==' '&&s[i+1]!=' ') count++;
    }
    cout<<count;
}
