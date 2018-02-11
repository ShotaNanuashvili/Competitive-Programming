#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
    freopen("scoreboard.in","r",stdin);
    int test;
    cin>>test;
    for(int k = 0; k<test; k++){
        //cin
        int num;
        cin>>num;
        bool arr[13] = {false};
        string s;
        cin>>s;
        for(int i = 0; i<num;i++){
            int index = s[i]-'A';
            arr[index] = 1;
        }
        int scores[13];
        for(int i = 0; i<13; i++){
            cin>>scores[i];
        }
        //solution
        int max = -1;
        char ans;
        for(int i = 0; i<13; i++){
            if(arr[i] == 0 && scores[i] > max){
                max = scores[i];
                ans = 'A' + i;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}