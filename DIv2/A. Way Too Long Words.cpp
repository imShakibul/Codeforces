#include<bits/stdc++.h>
using namespace std;

int main()
{
    string ch;
    int n,length;
    cin>>n;
    for(int i = 1; i <= n; i++){
        cin>>ch;
        if(ch.length() <= 10){
            cout<<ch<<endl;
        }
        else if(ch.length() > 10){
                length = ch.length()-2;
            cout<<ch.front();
            cout<<length;
            cout<<ch.back()<<endl;
        }
    }
    return 0;
}
