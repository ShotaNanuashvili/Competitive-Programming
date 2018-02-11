#include <stdio.h>
#include <iostream>
#include <map>
#include <cmath>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{
    string s; cin>>s;
    int size = s.size();
    double ans = 0;
    map<char,int> mp;
    for(int i = 0; i<size; i++){
        mp[s[i]]++;
    }
    for(map<char,int>::iterator it = mp.begin(); it!=mp.end(); it++){
        double fr = 1.0 * it->second * it->second / size;
        ans += fr;
    }
    cout<<fixed<<setprecision(17);
    cout<<ans;
    return 0;
}