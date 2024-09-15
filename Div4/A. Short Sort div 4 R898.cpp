#include<iostream>
using namespace std;

int main()
{
    int num;
    cin>>num;
    string str;
    for(int i = 1; i <= num; i++)
    {
        cin>>str;
        if(str[0] == 'a'){
            cout<<"Yes"<<endl;
        }
        else if(str[1] == 'b'){
            cout<<"Yes"<<endl;
        }
        else if(str[2] == 'c'){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}
