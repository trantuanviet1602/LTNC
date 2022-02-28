#include <iostream>
using namespace std;
int main()
{
    int leg,head; cin>>head>>leg;
    bool flag=false;
    int num_chick=0, num_dog;
    for(num_chick;num_chick<=head;num_chick++)
    {
        num_dog=head-num_chick;
        if (num_dog*4+num_chick*2==leg)
		{
			 cout<<"chicken = "<<num_chick<<", dog = "<<num_dog;
			 flag=true;
		}
    }
    if(flag==false) cout<<"invalid"; 
}
