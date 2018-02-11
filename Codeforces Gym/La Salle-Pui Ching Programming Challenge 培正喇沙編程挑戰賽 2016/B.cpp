#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double a,b,c;
    double e = 2*pow(10,-11);
    cin >> a >> b >> c;
    if(1/a + 1/b + 1/c < 1-e)cout<<"Yes";
    else cout<<"No";
    return 0;
}