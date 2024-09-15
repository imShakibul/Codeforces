#include<iostream>
using namespace std;

int main()
{
    string a,b = "codeforces";
    int num;
    cin>>num;
    for(int c = 1; c <= num; c++){
        int ans = 0;
        cin>>a;
        for(int i = 0; i < 10; i++){
            if(a[i] != b[i]){
                ans++;
                }
        }
    cout<<ans<<endl;
    }
    return 0;
}
