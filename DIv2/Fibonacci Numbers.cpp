#include<iostream>
using namespace std;

int main()
{
    int i,n;
    cout<<"Enter the number for Fibonacci Series: ";
    cin>>n;
    int fib[n];
    fib[0] = 0;
    fib[1] = 1;
    for(i = 2; i <= n; i++){
        fib[i] = fib[i - 1]+fib[i - 2];
    }
     for(i = 0; i <= n; i++){
        cout<<"Fibonacci["<<i<<"] : "<<fib[i]<<" "<<endl;
    }
    return 0;
}
