#include <iostream>
#include <stdio.h>
#include <cmath>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
    double n, x, ans = 0;
    cin>>n;
    while(n--){
        cin>>x;
        if(x==0)ans+=2;
        else ans+= 1/x;
    }
    cout<<fixed<<setprecision(9)<<ans;
    return 0;
}