#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int dd, mm, yyyy, bd1, bm1, bd2, bm2;
    scanf("%d/%d/%d", &dd, &mm, &yyyy);
    scanf("%d/%d", &bd1, &bm1);
    scanf("%d/%d", &bd2, &bm2);
    int daysInMonth[] = {31,29,31,30,31,30,31,31,30,31,30,31};
    int currDay = dd;
    int currMonth = mm;
    int currYear = yyyy;
    int specialCt = 0;
    for(int i = 0; i<2048; i++){
        //increase day
        if(currDay == 31 && currMonth == 12){
            currDay = 1;
            currMonth = 1;
            currYear++;
        }else if(currDay == daysInMonth[currMonth-1]){
            currDay = 1;
            currMonth++;
        }else if(currDay == 28 && currMonth == 2){
            if(currYear % 4 == 0){
                currDay++;
            }else{
                currDay = 1;
                currMonth++;
            }
        }else{
            currDay++;
        }
        // cout<<currDay<<"/"<<currMonth<<"/"<<currYear<<endl;
        //check special days
        if((currDay == bd1 && currMonth == bm1) || (currDay == bd2 && currMonth == bm2) || (currDay == dd && currMonth == mm) || (i+1)%100==0) {
            specialCt++;
            // cout<<"--------------It's a special Day!-------------"<<endl;
        }
    }
    cout<<specialCt;
    return 0;
}