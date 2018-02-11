#include <iostream>
#include <vector>
#include <utility>
using namespace std;

void heapify(string &s, int i, int endInd, vector<pair<int,int>> &v){
    int largest = i;
    int l = (i+1)*2-1;
    int r = (i+1)*2;
    if(l<=endInd && s[l]>s[largest]){
        largest = l;
    }
    if(r<=endInd && s[r]>s[largest]){
        largest = r;
    }
    if(largest != i){
        if(s[i] != s[largest]){
            v.push_back(make_pair(i,largest));
            char temp = s[i];
            s[i] = s[largest];
            s[largest] = temp;
        }
        heapify(s, largest, endInd,v);
    }
}

void heapsort(string &s, vector<pair<int,int>> &v, int endInd){
    for(int i = endInd; i>=0; i--){
        //cout<<"heapifing: "<<s<<endl;
        heapify(s,i,endInd,v);
    }
    for (int i=endInd; i>=0; i--)
    {
        if(s[i] != s[0]){
            v.push_back(make_pair(i,0));
            char temp = s[0];
            s[0] = s[i];
            s[i] = temp;
        }
        heapify(s,0,i-1,v);
    }
}

int main()
{
    string s; cin>>s;
    vector<pair<int,int>> v;
    //heapsort
    heapsort(s,v,s.size()-1);
    //cout
    //cout<<s;
    for(int i = v.size()-1; i>=0; i--){
        cout<<v[i].first+1<<" "<<v[i].second+1<<endl;
    }
    return 0;
}