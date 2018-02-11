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
        int n,m; scanf("%d %d",&n,&m);
        bool arr[n][m];
        int total = 0, edges = 0;
        for(int i = 0; i<n; i++){
            string s; cin>>s;
            for(int j = 0; j<m; j++){
                bool temp = s[j]-'0';
                arr[i][j] = temp;
                if(temp)total++;
            }
        }
        for(int i = 0; i<m; i++){
            if(arr[0][i])edges++;
            if(arr[n-1][i])edges++;
        }
        for(int i = 1; i<n-1; i++){
            if(arr[i][0])edges++;
            if(arr[i][m-1])edges++;
        }
        int zeroes = (2*n + 2*m - 4)-edges;
        if(total-edges>=zeroes)cout<<zeroes<<endl;
        else cout<<-1<<endl;
    }
    
    return 0;
}