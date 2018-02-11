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
        int n,m; cin>>n>>m;
        if(n%2==0 && m%2==0)cout<<"abdullah"<<endl;
        else cout<<"hasan"<<endl;
    }
    return 0;
}