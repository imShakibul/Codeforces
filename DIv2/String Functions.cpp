#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    char s1[] = "Hello";
    char s2[] = "Hello";
    //strncpy(s1,s2,2);
    //cout<<s1<<endl;
    int length = strnlen(s1,2);
    cout<<length<<endl;
    if(strcmp(s1, s2) == 0){
        cout<<"String Are Same"<<endl;
    }
    else{
        cout<<"String Are Different"<<endl;
    }

}

