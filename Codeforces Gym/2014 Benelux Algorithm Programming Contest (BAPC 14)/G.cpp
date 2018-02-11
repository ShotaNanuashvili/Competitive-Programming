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
        int n; cin>>n;
        int maxTorqueGear = 0;
        double maxTorque = -100000000;
        for(int i = 0; i<n; i++){
            double a,b,c; cin>>a>>b>>c;
            double torque = pow(b,2)/(a*2) + c;
            if(torque>maxTorque){
                maxTorque = torque;
                maxTorqueGear = i+1;
            }
        }
        cout<<maxTorqueGear<<endl;
    }
    return 0;
}