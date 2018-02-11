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
        long a,b,c; cin>>a>>b>>c;
        if(a<b && a<c)cout<<"First"<<endl;
        if(b<a && b<c)cout<<"Second"<<endl;
        if(c<a && c<b)cout<<"Third"<<endl;
    }
    return 0;
}