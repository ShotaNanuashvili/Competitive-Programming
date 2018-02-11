#include <stdio.h>
#include <iostream>

using namespace std;
int main()
{
    int p1,p2,p3,w; cin>>p1>>p2>>p3>>w;
    if(p1+p2 >= w || p2+p3 >= w || p3 + p1 >= w)cout<<"YES";
    else cout<<"NO";

    return 0;
}