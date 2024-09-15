#include<iostream>
using namespace std;

int main()
{
    int a,b,c,num;
    cin>>num;
    for(int i = 1; i <= num; i++)
    {
        cin>>a>>b>>c;
        if(a>=b && a>=c)
        {
            if(b>c)
            {
                if(a+b >= 10){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
            else
            {
                if(a+c >= 10){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }

            }
        }
         else if(b>=a && b>=c)
        {
            if(a>c)
            {
                if(b+a >= 10){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
               else{
                if(b+c >= 10){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
        }
        else
        {
            if(a<b)
            {
                if(c+b >= 10)
                {
                    cout<<"YES"<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }
            }
            else
            {
                if(a+c >= 10){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
        }
    }
    return 0;
}
