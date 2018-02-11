#include <iostream>
#include <stdio.h>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int K,P,X;
    cin>>K>>P>>X;
    double prev = K*P + X;
    int ct = 1;
    while(true){
        ct++;
        double ans = 1.0*K*P/ct + X*ct;
        if(ans > prev){
            prev = round(prev*1000.0)/1000.0;
            cout<<fixed<<setprecision(3)<<prev;
            return 0;
        }
        prev = ans;
    }
    return 0;
}