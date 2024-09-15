#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int num, num1;
    string strIn;
    string str = "Timur";
    sort(str.begin(), str.end());
    cin >> num;

    for(int i = 0; i < num; i++)
    {
        cin >> num1 >> strIn;
        sort(strIn.begin(), strIn.end());
        if(strIn == str){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
