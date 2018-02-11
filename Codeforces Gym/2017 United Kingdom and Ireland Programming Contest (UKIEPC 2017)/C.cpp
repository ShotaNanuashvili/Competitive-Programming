#include <iostream>
#include <stdio.h>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(8);
    int n, ans = 0;
    bool onlyReds = true;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        if(s=="red")v[1]++;
        if(s=="yellow")v[2]++;
        if(s=="green")v[3]++;
        if(s=="brown")v[4]++;
        if(s=="blue")v[5]++;
        if(s=="pink")v[6]++;
        if(s=="black")v[7]++;
    }
    for(int i=7; i>1; i--){
        if(v[i] != 0){
            ans += v[1]*i;
            onlyReds = false;
            break;
        }
    }
    for(int i=0; i<8; i++){
        ans += v[i]*i;
    }
    if(onlyReds)ans=1;
    cout<<ans;
    return 0;
}