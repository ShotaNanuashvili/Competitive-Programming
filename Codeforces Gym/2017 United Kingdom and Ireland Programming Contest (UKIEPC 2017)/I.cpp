#include <iostream>
#include <stdio.h>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    int n,height;
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i<n; i++){
        cin>>v[i];
    }
    cin>>height;
    int ans;
    int rem = 501;
    for(int i = 0; i<n; i++){
        if(height % v[i] < rem){
            rem = height % v[i];
            ans = v[i];
        }
    }
    cout<<ans;
    return 0;
}