#include<iostream>
using namespace std;

int main()
{
    int a,num;
    cin>>a;
    cin>>num;
    for(int i = 1; i <= num; i++)
    {
        if(a%10 != 0)
        {
            a--;
        }
        else
        {
            a = a/10;
        }
    }
    cout<<a<<endl;

}
