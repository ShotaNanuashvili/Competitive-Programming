#include <stdio.h>
#include <iostream>
#include <map>
using namespace std;

map<char,int> mp;

bool getChars(char& shouldBe, char& shouldntBe, int colRowNum){
    bool different = false;
    for (auto const& it : mp)
    {
        char first = it.first;
        int second = it.second;
        if(second == 1){
            shouldntBe = first; 
            different = true;
        }
        else if(second == colRowNum+1)shouldntBe = first;
        else if(second == colRowNum-1)shouldBe = first;
    }
    return different;
}

void getLocation(int& row, int& col, char c, char arr[][26], int colRowNum, bool different){
    //if the character we look for is different than any other
    if(different){
        for(int i = 0; i<colRowNum; i++){
            for(int j = 0; j<colRowNum; j++){
                if(arr[i][j] == c){
                    row = i+1;
                    col = j+1;
                    return;
                }
            }
        }
    }
    //if the character we look for is repeated one extra time
    for(int i = 0; i<colRowNum; i++){
        int x1 = -1;
        int x2 = -1;
        for(int j = 0; j<colRowNum; j++){
            if(arr[i][j] == c){
                if(x1 == -1) {
                    x1 = j;
                }
                else {
                    x2 = j;
                }
            }
            if(x1 != -1 && x2 != -1){
                //find out which one is odd
                int count1 = 0;
                int count2 = 0;
                for(int k = 0; k<colRowNum; k++){
                    if(arr[k][x1] == c)count1++;
                    if(arr[k][x2] == c)count2++;
                }
                row = i+1;
                col = count1==2 ? x1+1 : x2+1;
                return;
            }
        }
    }
}

int main()
{
    int colRowNum = 0;
    while(cin>>colRowNum){
        //populate map and array
        char arr[26][26];
        string rowLetters;
        for(int i = 0; i<colRowNum; i++){
            cin>>rowLetters;
            for(int j = 0; j<colRowNum; j++){
                char c = rowLetters[j];
                arr[i][j] = c;
                if(mp[c] == NULL){
                    mp[c] = 1;
                }else{
                    mp[c]++;
                }
            }
        }
        //find extra and missing getChars
        char c1,c2;
        bool different = getChars(c1,c2,colRowNum);
        //find exact location
        int row,col = 0;
        getLocation(row,col,c2,arr,colRowNum,different);
        mp.clear();
        cout<<row<<" "<<col<<" "<<c1<<endl;
    }
    return 0;
}