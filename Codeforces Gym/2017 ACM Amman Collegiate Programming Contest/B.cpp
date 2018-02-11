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
        string a,b; cin>>a>>b;
        map<char,int> mp;
        int ct = 0;
        for(int i = 0; i<b.size(); i++){
            mp[b[i]]++;
        }
        for(int i = 0; i<a.size(); i++){
            if(mp[a[i]] == 0)break;
            mp[a[i]]--;
            ct++;
        }
        cout<<ct<<endl;
    }
    return 0;
}