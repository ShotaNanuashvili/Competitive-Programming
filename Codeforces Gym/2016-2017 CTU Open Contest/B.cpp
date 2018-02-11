#include <iostream>

using namespace std;

int main()
{
    int num;
    while(cin >>  num){
        int ans = 0;
        bool arr[512][9] = {false};
        unsigned long trainee;
        for(int i = 0; i<num; i++){
            //creating trainee array
            cin >> trainee;
            bool tr[9] = {false};
            while(trainee != 0){
                int l = trainee % 10;
                tr[l-1] = true;
                trainee /= 10;
            }
            //compare array
            for (int i = 0; i < 512; i++) {
             for (int j = 0; j < 9; j++) {
                //if this trainee group doesnt exist. IOW arr[i] = false
                bool isEmpty = true;
                for(int k = 0; k<9; k++){
                    if(arr[i][k]){
                        isEmpty = false;
                        break;
                    }
                }
                if(isEmpty){
                    for(int k = 0; k<9; k++){
                        arr[i][k] = tr[k];
                    }
                    ans++;
                    i=512;
                    break;
                }
                //comparing each arr[i] to tr
                if(arr[i][j] == tr[j] && j==8){
                    //we found similar group, now lets get out of the loop
                    i = 512;
                    break;
                }
                if(arr[i][j] == tr[j])continue;
                if(arr[i][j] != tr[j])break;
             }
            }
        }
        //printing answer
        cout<<ans<<endl;
    }
    return 0;
}