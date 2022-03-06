#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s; getline(cin,s);
    int count_letter=0,count_number=0,count_char=0;
    for(int i=0;i<s.length();i++)
    {
        if((s[i]>='A'&&s[i]<='Z')||s[i]>='a'&&s[i]<='z') count_letter++;
        else if(s[i]>='0'&&s[i]<='9') count_number++;
        else count_char++;
    }
    cout<<count_letter<<" "<<count_number<<" "<<count_char;
}
