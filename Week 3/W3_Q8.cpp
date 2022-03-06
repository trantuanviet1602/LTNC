#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s; getline(cin,s);
    for(int i=0;i<s.size();i++)
    {
        if(i>s.size()-4||s.substr(i,4)!="Zues") cout<<s[i];
        else
        {
            cout<<"Zeus";
            i=i+3;
        }
    }
}
