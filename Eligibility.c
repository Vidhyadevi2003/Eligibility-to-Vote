#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter Age:";
    cin>>age;
    if(age<=18)
    {
        cout<<"Your Are not Eligible to Vote!";
    }
    else
    {
        cout<<"You Are Eligible to Vote!";
    }
    return 0;
}
