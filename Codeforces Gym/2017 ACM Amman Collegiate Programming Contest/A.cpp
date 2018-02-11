#include <stdio.h>
#include <iostream>
#include <map>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        map<int,int> mp;
        int n; cin>>n;
        for(int i = 0; i<n; i++){
            string s; cin>>s;
            int freq; cin>>freq;
            mp[freq]++;
        }
        int minfreq = 100000;
        int maxn = 0;
        for(map<int,int>::iterator it = mp.begin(); it!=mp.end(); it++){
            if(it->second > maxn){
                maxn = it->second;
                minfreq = it->first;
            }
            else if(it->second == maxn && it->first < minfreq){
                minfreq = it->first;
            }
        }
        cout<<minfreq<<endl;
    }
    return 0;
}