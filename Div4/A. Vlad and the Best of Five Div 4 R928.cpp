#include<iostream>
using namespace std;

int main()
{
    string a;
    int num;
    cin>>num;
    for(int j = 1; j <= num; j++){
        cin>>a;
        int ans = 0;
        int ans1 = 0;
        for(int i = 0; i <= 4; i++){
            if(a.at(i) == 'A'){
                    ans++;

            }
            else{
                ans1++;
            }
        }
        if(ans > ans1){
            cout<<"A"<<endl;
        }
        else{
            cout<<"B"<<endl;
        }

    }
    return 0;
}
