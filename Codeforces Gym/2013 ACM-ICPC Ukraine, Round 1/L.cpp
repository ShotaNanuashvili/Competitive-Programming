#include <stdio.h>
#include <iostream>
#include <map>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    int x1,x2,x3,y1,y2,y3,z1,z2,z3;
    cin>>x1>>x2>>x3>>y1>>y2>>y3>>z1>>z2>>z3;
    cout<< x1*y2*z3 + x2*y3*z1 + x3*y1*z2 - z1*y2*x3 - z2*y3*x1 - z3*y1*x2;
    return 0;
}