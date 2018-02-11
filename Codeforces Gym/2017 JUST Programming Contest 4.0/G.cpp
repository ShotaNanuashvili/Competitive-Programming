#include <stdio.h>
#include <iostream>
#include <map>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    int t; scanf("%d",&t);
    while(t--){
        int n; scanf("%d",&n);
        int ct = 0;
        int arr[n];
        bool req[n] = {false};
        for(int i = 0; i<n; i++){
            scanf("%d",&arr[i]);
        }
        if(n<3){
            printf("0\n");
            continue;
        }
        int maxn,minn;
        for(int i = 0; i<n; i++){
            if(i==0 || i==n-1){
                maxn = arr[i];
                continue;
            }
            if(arr[i]<maxn)continue;
            req[i] = true;
            maxn = arr[i];
        }
        for(int i = n-1; i>=0; i--){
            if(i==0 || i==n-1){
                minn = arr[i];
                continue;
            }
            if(arr[i]>minn)continue;
            if(req[i])ct++;
            minn = arr[i];
        }
        printf("%d\n",ct);
    }
   
    return 0;
}