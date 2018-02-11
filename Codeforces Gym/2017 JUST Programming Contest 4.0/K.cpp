#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <map>

using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        int size; cin>>size;
        string s; cin>>s;
        map<char,int> mp;
        for(int i = 0; i<size; i++){
            mp[s[i]]++;
        }
        int odds = 0, ans = 0;
        string gen = "";
        for(map<char,int>::iterator it = mp.begin(); it!=mp.end(); it++){
            if(it->second % 2 == 1)odds++;
            for(int i = 0; i<it->second/2; i++){
                gen+=it->first;
            }
        }
        if(odds>1){
            cout<<0<<endl;
            continue;
        }
		do {
			ans++;
		} while (next_permutation(gen.begin(), gen.end()));
		cout<<ans<<endl;
    }
    return 0;
}