#include<iostream>
#include<string.h>
using namespace std;
#define PRAISE " What a Super Marvelous Name!"
int main()
{
    char name[40];
    cout<<"What is Your First Name: ";
    cin>>name;
    cout<<"Hello "<<name<<PRAISE<<endl;
    cout<<"length of your name is "<<strlen(name)<<" Memory allowcation is "<<sizeof name<<endl;

}
