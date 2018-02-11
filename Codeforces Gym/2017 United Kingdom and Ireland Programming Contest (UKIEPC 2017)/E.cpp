#include <iostream>
#include <vector>
#include <utility>
using namespace std;

bool calculateRent(vector<int> &stud,vector<int> &cap,vector<int> &cost, vector<int> &ans){
    int maxSt = 0, ind = 0;
    for(int i = 0; i<stud.size(); i++){
        if(stud[i]>maxSt){
            maxSt = stud[i];
            ind = i;
        }
    }
    if(!maxSt)return true;
    int minCost = 1001, index = 0;
    for(int i = 0; i<cap.size(); i++){
        if(cap[i]>=maxSt && cost[i]<minCost){
            minCost = cost[i];
            index = i;
        }
    }
    if(minCost==1001)return false;
    ans[ind] = index+1;
    stud[ind] = 0;
    cost[index] = 1001;
    cap[index] = 0;
    return calculateRent(stud,cap,cost,ans);
}

int main()
{
    int n,m; cin>>n>>m;
    vector<int> stud(n), ans(n), cap(m), cost(m);
    for(int i = 0; i<n; i++){
        cin>>stud[i];
    }
    for(int i = 0; i<m; i++){
        cin>>cap[i];
    }
    for(int i = 0; i<m; i++){
        cin>>cost[i];
    }
    
    //ans
    if(!calculateRent(stud,cap,cost,ans)){
        cout<<"impossible";
        return 0;
    }
    for(int i = 0; i<n; i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
