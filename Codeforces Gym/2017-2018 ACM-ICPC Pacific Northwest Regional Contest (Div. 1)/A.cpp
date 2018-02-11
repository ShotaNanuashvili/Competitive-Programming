#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i = 0; i<s.size()-4; i++){
        if(s[i] == s[i+3] && s[i+1] == s[i+2]){
            cout<<"Or not.";
            return 0;
        }
    }
    cout<<"Odd.";

    return 0;
}