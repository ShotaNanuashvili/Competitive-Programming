#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <map>

using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int arr[n];
        for(int i = 0; i<n; i++){
            scanf("%d",&arr[i]);
        }
        long long sum = 0;
        for(int i = 0; i<n; i++){
            if(i==0){
                sum=arr[i];
                continue;
            }
            sum+=arr[i]*(sum+1);
            sum = sum % 1000000007;
        }
        cout<<sum<<endl;
    }
    return 0;
}