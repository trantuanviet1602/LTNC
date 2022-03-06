#include <iostream>
#include <string>
using namespace std;
bool check(string s)
{
    int count=0;
    if(s.size()>=6&&s.size()<=15)
    {
        if(!(s[0]>='0'&&s[0]<='9'))
        {
            for(int i=0;i<s.size();i++)
            {
                if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||(s[i]>='0'&&s[i]<='9')) count++;
            }
            if(count==s.size()) return true;
        }
        else return false;
    }
    else return false;
}
int main()
{
    string s; getline(cin,s);
    if(check(s)) cout<<"Valid username.";
    else cout<<"Invalid username.";
}
