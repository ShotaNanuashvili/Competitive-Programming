#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
    freopen("tabs.in","r",stdin);
    int test;
    while(cin>>test){
        for(int i = 0; i<test;i++){
            int x,y;
            cin>>x>>y;
            if(x==1){
                cout<<0<<endl;
            }else if(y==1 || y==x){
                cout<<1<<endl;
            }else{
                cout<<2<<endl;
            }
        }
    }
    return 0;
}