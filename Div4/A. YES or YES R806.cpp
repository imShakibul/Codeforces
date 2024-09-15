#include<iostream>
using namespace std;

int main()
{
    string a;
    int n,ans = 0;
    cin>>n;
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < 3; j++){
        cin>>a[j];
        if (a[j] == 'Y'|| a[j] == 'y'){
                ans++;
        }
        else if(a[j] == 'E'|| a[j] == 'e'){
                ans++;
        }
        else if(a[j] == 'S'|| a[j] == 's'){
                ans++;
        }
        }
        if(ans == 3){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
}
}
