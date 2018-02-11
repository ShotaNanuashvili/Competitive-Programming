#include <stdio.h>
#include <iostream>
#include <map>
#include <cmath>
#include <vector>
using namespace std;

long long sumUpTo(long long n){
    if(n<=9)return n-1;
    long long ans = 0;
    int digitsOfN = 0;
    for(int i = n; i!=0; i/=10){
        digitsOfN++;
    }
    for(int i = 1, k = 9; i<digitsOfN; i++, k*=10){
        ans+=i*k;
    }
    ans += digitsOfN*(n-pow(10,digitsOfN-1));
    return ans;
}

int main()
{
    long long n,a; cin>>n>>a;
    long long x = sumUpTo(a+n);
    long long y = sumUpTo(a);
    cout<<x-y;
    return 0;
}