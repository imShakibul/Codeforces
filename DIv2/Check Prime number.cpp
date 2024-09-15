#include<iostream>
using namespace std;

int main()
{
    int i,n,pr = 0;
    cout<<"Enter The number to check: ";
    cin>>n;
    if(n <= 1){
        pr++;
        }
    else{
        for(i = 2; i < n; i++){
        if(n%i == 0){
            pr++;
            break;
        }
        }
    }
    if(pr == 0){
        cout<<"Prime"<<endl;
    }
    else{
        cout<<"Not Prime"<<endl;
    }
    return 0;
}
