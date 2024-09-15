#include<iostream>
using namespace std;

int main()
{
    int a,b,c,sum,num;
    cin>>num;
    for(int i = 1; i <= num; i++)
    {
        cin>>a>>b>>c;
        sum = a+b+c;
        if(c<=a && c<=b){
            sum = sum - c;
            if(sum >= 10){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
        else if(a<=b && a<=c){
            sum = sum - a;
            if(sum >= 10){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
        else{
            sum = sum - b;
            if(sum >= 10){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
    }
    return 0;
}
