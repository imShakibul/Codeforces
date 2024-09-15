#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,n=0;
    cin>>a>>b>>c>>d;
    int check[4]={a,b,c,d};
    /*check[0] = a;
    check[1] = b;
    check[2] = c;
    check[3] = d;*/
    sort(check,check+4);

    for(int i = 0; i<3; i++){
        if(check[i] == check[i+1]){
            n++;
        }
    }
    cout<<n<<endl;
    return 0;
}

