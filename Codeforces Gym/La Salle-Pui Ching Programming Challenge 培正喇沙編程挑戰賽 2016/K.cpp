#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

long long getPoints(long n, bool small){
    long long ans = 0;
    for(long i = 1; i<=n; i++){
        if(small){
            double x = sqrt(pow(n,2)-pow(i,2))+1.0;
            ans += sqrt(pow(n,2)-pow(i,2))+1;
            if(floor(x) == x){
                ans--;
            }
            continue;
        }
        ans += sqrt(pow(n,2)-pow(i,2))+1;
    }
    return 4*ans+1;
}

int main()
{
    long n,m;
    cin>>n>>m;
    if(m>=n){
        cout<<getPoints(n+m,false);
    }else{
        cout<<getPoints(n+m,false)-getPoints(n-m,true);  
    } 
    return 0;
}
