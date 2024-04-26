#include<iostream>
#include<vector>
#include <limits.h>
#include <algorithm>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int minFirstSkill = INT_MAX;
    int minSecondSkill = INT_MAX;

    int ans = INT_MAX;

    for(int i=0; i<n; i++)
    {
        int time;
        string skillsRepresntation;
       bool isFirstSkill = 0, isSecondSkill = 0;

        cin >> time >> skillsRepresntation;

        if(skillsRepresntation[0] == '1') isFirstSkill = 1;
        if(skillsRepresntation[1] == '1') isSecondSkill = 1;

        if(isFirstSkill && isSecondSkill) ans =  min(ans,time);
        else if(isFirstSkill) minFirstSkill = min(minFirstSkill,time);
        else if(isSecondSkill) minSecondSkill = min(minSecondSkill,time);
    }

    if(minFirstSkill != INT_MAX && minSecondSkill != INT_MAX) 
        ans = min(ans, minFirstSkill + minSecondSkill);
    else if(ans == INT_MAX) 
        ans = -1;


    cout << ans << endl;


}

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        solve();
    }
}