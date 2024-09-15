#include<iostream>
using namespace std;

int main()
{
    int num;
    cin>>num;
    char ch;
    for(int i = 1; i <= num; i++){
        cin>>ch;
        if(ch == 'c' || ch == 'o'|| ch == 'd'|| ch == 'e'|| ch == 'f' || ch == 'o' || ch == 'r' || ch == 'c' || ch == 'e' || ch == 's'){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
