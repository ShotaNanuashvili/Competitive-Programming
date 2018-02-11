#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

int main()
{
    freopen("overcode.in","r",stdin);
    int test,n;
    cin>>test;
    for(int k = 0; k<test; k++){
        cin>>n;
        vector<int> elo (n);
        for(int i = 0; i<n; i++){
            cin >> elo[i];
        }
        sort(elo.begin(),elo.end());
        int ans = 0;
        for(int i = 0; i<n; i++){
            if(n-i<6)break;
            if(elo[i+5]-elo[i] > 1000)continue;
            ans++;
            i+=5;
        }
        cout<<ans<<endl;
    }
    return 0;
}