#include <iostream>
#include <vector>

using namespace std;

int main()
{
    double H,W,ha,wa,hb,wb;
    cin >>H>>W>>ha>>wa>>hb>>wb;
    string ans1, ans2;
    ans1 = ((ha+hb<=H && wa<=W && wb<=W) || (wa+wb<=W && ha<=H && hb<=H)) ? "Yes" : "No";
    ans2 = (((H-ha)/2>=hb && W>=wb) || ((W-wa)/2>=wb && H>=hb) || ha>H || wa>W) ? "No" : "Yes";
    cout << ans1 <<endl<<ans2;
    return 0;
}