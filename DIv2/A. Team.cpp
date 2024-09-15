#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num,teamSum,poss = 0;
    cin>>num;
    for(int i = 1; i <= num; i++){
            int team[3];
        for(int j = 0; j < 3; j++){
        cin>>team[j];
        }
        teamSum = team[0]+team[1]+team[2];
            if(teamSum >= 2){
                poss++;
        }
    }
    cout<<poss<<endl;
    return 0;

}
