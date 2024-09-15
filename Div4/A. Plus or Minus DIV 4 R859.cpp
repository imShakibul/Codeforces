#include<iostream>
using namespace std;

int main()
{
    int a,b,c,j;
    cin>>j;
    for(int i = 1; i <= j; i++){
        cin>>a>>b>>c;
        if(a+b == c){
            cout<<"+"<<endl;
        }
        else{
            cout<<"-"<<endl;
        }
    }
    return 0;
}
