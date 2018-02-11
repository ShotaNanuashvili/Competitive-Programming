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
        long n,m; scanf("%ld %ld",&n,&m);
        int arr[n];
        for(int i = 0; i<n; i++){
            scanf("%d",&arr[i]);
        }
        for(int i = 0; i<n; i++){
            if(arr[i]==-1 && i!=0 && arr[i-1]!=-1){
                arr[i]=(arr[i-1]+1)%m;
            }
        }
        for(int i = n-1; i>=0; i--){
            if(i==n-1)continue;
            if(arr[i] == -1){
                arr[i] = (arr[i+1]+m-1)%m;
            }
        }
        for(int i = 0; i<n; i++){
            printf("%d ",arr[i]);
        }
        printf("\n");
    }
    return 0;
}