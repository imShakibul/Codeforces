#include<iostream>
using namespace std;

int main()
{
    string num;
    cin>>num;
    for(int i = 0; i < num.length(); i++){
        if(num[i] == '+'){
            num.erase(i,1);
            i--;
        }
    }
    int n = num.length();
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-1-i; j++ ){
            if(num[j] > num[j+1]){
                swap(num[j], num[j+1]);
            }
        }

    }
    cout<<num<<endl;
}