#include<iostream>
using namespace std;

int main()
{
    int i,j,n,ans = 0;
    cin>>n;
    for(i = 1; i <= n; i++){
        bool ck = 0;
        for(j = 2; j < i; j++){
            if(i%j == 0){
                ck = 1;
                break;
            }
        }
        if(ck == 0){
            cout<<i<<endl;
            ans++;
        }
    }
    cout<<endl<<"Total number of prime numbers is: "<<ans<<endl;
    return 0;
}
