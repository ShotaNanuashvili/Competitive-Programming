#include <iostream>
#include <stdio.h>
#include <cmath>
#include <vector>
#include <iomanip>
using namespace std;

void writeInArr(int hoursInDay, int ris, int sun, int i, bool arr[][100]){
    for(int j = 0; j<hoursInDay; j++){
        if(ris<sun){
            if(j>ris && j<sun)arr[i][j]=1;
            else arr[i][j]=0;
        }else{
            if(j>=sun && j<=ris)arr[i][j]=0;
            else arr[i][j]=1;
        }
    }
}

int main()
{
    int n; cin>>n;
    vector<int> v(n);
    bool arr[n][100];
    int maxDay = 0;
    int bdp;
    for(int i = 0; i<n; i++){
        cin>>v[i];
        if(maxDay<v[i]) {
            maxDay=v[i]; 
            bdp=i;
        }
        int ris,sun; cin>>ris>>sun;
        writeInArr(v[i],ris,sun,i,arr);
    }
    //solution
    int i=0;
    while(true){
        for(int j = 0; j<v[bdp]; j++){
            int hours = j+v[bdp]*i;
            if(hours>1825*maxDay){
                cout<<"impossible";
                return 0;
            }
            int index = hours % v[bdp];
            if(!arr[bdp][index]){
                bool isNightEverywhere = true;
                for(int k = 0; k<n; k++){
                    int ind = hours % v[k];
                    if(arr[k][ind]){
                        isNightEverywhere = false;
                        break;
                    }
                }
                if(isNightEverywhere){
                    cout<<hours;
                    return 0;
                }
            }
        }
        i++;
    }
    return 0;
}