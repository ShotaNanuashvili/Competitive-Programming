#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    long arr[n];
    vector<long> freq(10000001);
    vector<long> ps(10000001);
    for(int i = 0; i<n; i++){
        cin >> arr[i];
        freq[arr[i]]++;
    }
    ps[0] = freq[0];
    for(int i = 1; i<10000001; i++){
        ps[i] = ps[i-1]+freq[i];
    }    
    for(int i = 0; i<n;i++){
        double win = (double)(n-ps[arr[i]])/n;
        double draw = (double)freq[arr[i]]/n;
        double lose = arr[i] == 0 ? 0 : (double)ps[arr[i]-1]/n;
        cout<<win<<" "<<draw<<" "<<lose<<endl;
    }
    return 0;
}