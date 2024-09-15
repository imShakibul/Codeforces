#include<iostream>
#include<string>
using namespace std;
int main()
{
    string first;
    string second;
    cin>>first;
    cin>>second;
    for(int i = 0; i < first.length(); i++){
        first[i] = tolower(first[i]);
    }
    for(int i = 0; i < first.length(); i++){
        second[i] = tolower(second[i]);
    }
    if(first < second ){
        cout<<"-1"<<endl;
    }
    else if(first > second ){
        cout<<"1"<<endl;
    }
    if(first == second ){
        cout<<"0"<<endl;
    }
    return 0;
}
