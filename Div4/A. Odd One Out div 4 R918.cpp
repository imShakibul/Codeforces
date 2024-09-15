#include<iostream>

using namespace std;

int main()
{
    int a,b,c,num;
    cin>>num;
    for(int i = 1; i <= num; i++)
    {
        cin>>a>>b>>c;
        if (a == b)
        {
            cout<<c<<endl;
        }
        else if (a == c)
        {
            cout<<b<<endl;
        }
        else
        {
            cout<<a<<endl;
        }
    }
    return 0;
}
