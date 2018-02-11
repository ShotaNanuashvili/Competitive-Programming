#include <stdio.h>
#include <iostream>
#include <map>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<long long> v1(3),v2(3);
    int x1,x2,x3,y1,y2,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    long long s1,s2,s3,k1,k2,k3;
    s1 = pow(x1-x2,2)+pow(y1-y2,2);
    s2 = pow(x2-x3,2)+pow(y2-y3,2);
    s3 = pow(x3-x1,2)+pow(y3-y1,2);
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    k1 = pow(x1-x2,2)+pow(y1-y2,2);
    k2 = pow(x2-x3,2)+pow(y2-y3,2);
    k3 = pow(x3-x1,2)+pow(y3-y1,2);
    
    v1[0] = s1;
    v1[1] = s2;
    v1[2] = s3;
    
    v2[0] = k1;
    v2[1] = k2;
    v2[2] = k3;
    
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    
    if(v1[0] * v2[1] == v2[0] * v1[1] && v1[0] * v2[2] == v2[0] * v1[2])cout<<"YES";
    else cout<<"NO";
    return 0;
}