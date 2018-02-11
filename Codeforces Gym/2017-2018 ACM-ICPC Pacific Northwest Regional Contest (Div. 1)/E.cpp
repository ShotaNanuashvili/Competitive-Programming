#include <iostream>
#include <stdio.h>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int n, X;
    double v;
    cin>>n>>X>>v;
    double len = 0, without = X;
    for(int i = 0; i<n; i++){
        double li,ri,vi;
        cin>>li>>ri>>vi;
        len += (ri-li)*vi;
        without -= (ri-li);
    }
    len = abs(len);
    double Vy = len/X;
    if(Vy>v){
        cout<<"Too hard";
        return 0;
    }
    double Vx = sqrt(pow(v,2)-pow(Vy,2));
    double distance = sqrt(pow(X,2)+pow(len/Vx,2));
    double t = distance / v;
    cout<<fixed<<setprecision(3)<<t;
    return 0;
}