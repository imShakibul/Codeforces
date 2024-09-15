#include<iostream>
using namespace std;

int main()
{
    int a,b = 0;
    cin>>a;
    b = a/5;
    if(a%5 != 0){
        b++;
    }
    cout<<b<<endl;
}
