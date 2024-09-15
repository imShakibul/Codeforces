#include<iostream>
using namespace std;

int main()
{
    int a,b,c,num;
    cin>>num;
    for(int i = 1; i <= num; i++){
        cin>>a>>b>>c;
        if(a+b == c || b+c == a ||c+a == b){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
