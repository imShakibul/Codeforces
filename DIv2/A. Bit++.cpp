#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,ans = 0;
    string s;
    string s1 = "X++";
    string s2 = "++X";
    string s3 = "X--";
    string s4 = "--X";
    cin>>n;
    for(int i = 1; i <= n; i++){
    cin>>s;
    if(s == s1||s ==s2){
        ans++;
    }
    else if(s == s3||s ==s4){
        ans--;
    }
    }
    cout<<ans;
    return 0;
}
