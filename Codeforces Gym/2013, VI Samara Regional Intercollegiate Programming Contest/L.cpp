#include <stdio.h>
#include <iostream>
#include <map>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    string s; cin>>s;
    for(int i = 0; i<s.size()/2; i++){
        if(s[i]!=s[s.size()-i-1]){
            s[s.size()-i-1] = s[i];
        }
    }
    cout<<s;
    return 0;
}