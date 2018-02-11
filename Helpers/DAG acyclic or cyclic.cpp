#include <stdio.h>
#include <vector>
#include <iostream>

#define test1 4
#define test2 2
#define test3 3
#define test4 5
#define test5 2

using namespace std;

bool returnsToItself(vector<vector<int>> &graph,int i,bool visited[],bool recStack[]){
    visited[i] = true;
    recStack[i] = true;
    
    for(int u = 0; u<graph[i].size(); u++){
        if(graph[i][u] == i)return true;
        if(recStack[graph[i][u]] == true)return true;
        if(!visited[graph[i][u]] && returnsToItself(graph,graph[i][u],visited,recStack))return true;
    }
    recStack[i] = false;
    return false;
}

bool isCyclic(vector<vector<int>> &graph, int size){
    bool visited[size];
    bool recStack[size];
    
    for(int i = 0; i<size; i++)visited[i]=false,recStack[i]=false;
    
    for(int i = 0; i<size; i++){
        if(!visited[i]){
            if(returnsToItself(graph,i,visited,recStack))return true;
        }
    }
    return false;
}

int main()
{
    vector<vector<int>> graph(test5);
    //test1 ans:1
    // graph[0].push_back(1);
    // graph[0].push_back(2);
    // graph[1].push_back(2);
    // graph[2].push_back(0);
    // graph[2].push_back(3);
    // graph[3].push_back(3);
    
    //test2 ans:1
    // graph[0].push_back(1);
    // graph[1].push_back(0);
    
    //test3 ans:0
    // graph[1].push_back(2);
    // graph[2].push_back(0);
    
    //test4 ans:1
    // graph[1].push_back(2);
    // graph[2].push_back(0);
    // graph[3].push_back(4);
    // graph[4].push_back(3);
    
    //test5 ans:1
    // graph[0].push_back(1);
    // graph[1].push_back(1);
    
    bool ans = isCyclic(graph,test5);
    cout<<ans;
    return 0;
}
