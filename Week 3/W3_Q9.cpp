#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s; getline(cin,s);
    int index;
    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i]!=' ') 
        {
            index=i;
            break;
        }
    }
    for(int i=index;i<s.size()-1;i++)
    {
        if(s[i]!=' ') cout<<s[i];
        else if(s[i]==' '&&s[i+1]!=' ') cout<<s[i];
        else continue;
    }
    cout<<s[s.size()-1];
}
