#include <iostream>

using namespace std;

char getLetter(string letter){
    if(letter==".-") return 'A';
    if(letter=="-...")return 'B';
    if(letter=="-.-.")return 'C';
    if(letter=="-..")return 'D';
    if(letter==".")return 'E';
    if(letter=="..-.")return 'F';
    if(letter=="--.")return 'G';
    if(letter=="....")return 'H';
    if(letter=="..")return 'I';
    if(letter==".---")return 'J';
    if(letter=="-.-")return 'K';
    if(letter==".-..")return 'L';
    if(letter=="--")return 'M';
    if(letter=="-.")return 'N';
    if(letter=="---")return 'O';
    if(letter==".--.")return 'P';
    if(letter=="--.-")return 'Q';
    if(letter==".-.")return 'R';
    if(letter=="...")return 'S';
    if(letter=="-")return 'T';
    if(letter=="..-")return 'U';
    if(letter=="...-")return 'V';
    if(letter==".--")return 'W';
    if(letter=="-..-")return 'X';
    if(letter=="-.--")return 'Y';
    if(letter=="--..")return 'Z';
    return '?';
}

int main()
{
    string text = "";
    while(cin>>text){
        string ans = "";
        string letter = "";
        for(int i=0; i<text.size(); i++){
            if(text[i] == '/'){
                if(text[i-1] == '/'){
                    ans += " ";
                }else{
                    ans += getLetter(letter);
                    letter = "";
                }
            }else{
                letter+=text[i];
            }
            if(i==text.size()-1){
                ans+=getLetter(letter);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}