#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string c = "";
    string x = "X";
    int yujuSum = 0,yujuTen = 0, yujuX = 0;
    int yerinSum = 0, yerinTen = 0, yerinX = 0;
    for(int i = 0; i<n; i++){
        cin >> c;
        if(c.compare(x) == 0){
            yujuSum += 10;
            yujuTen++;
            yujuX ++;
        }
        else if(c.compare("10") == 0){
            yujuSum += 10;
            yujuTen ++;
        }
        else if(c.compare("M") == 0)continue;
        else yujuSum += stoi(c);
    }

    for(int i = 0; i<n; i++){
        cin >> c;
        if(c.compare(x) == 0){
            yerinSum += 10;
            yerinTen++;
            yerinX ++;
        }
        else if(c.compare("10") == 0){
            yerinSum += 10;
            yerinTen++;
        }
        else if(c.compare("M") == 0)continue;
        else yerinSum += stoi(c);
    }

    if(yujuSum > yerinSum)cout<<"Yuju";
    else if(yerinSum > yujuSum)cout<<"Yerin";
    else if(yujuTen > yerinTen)cout<<"Yuju";
    else if(yerinTen > yujuTen)cout<<"Yerin";
    else if(yujuX > yerinX)cout<<"Yuju";
    else if(yerinX > yujuX) cout<<"Yerin";
    else cout<<"Shoot-off";
    return 0;
}