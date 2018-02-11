#include <stdio.h>
#include <iostream>
#include <map>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    string s; cin>>s;
    int sumOfDigits = 0;
    for(int i = 0; i<s.size(); i++){
        sumOfDigits += s[i]%3;
    }
    string ans = sumOfDigits%3==0 ? "yes" : "no";
    cout<<ans;
    return 0;
}