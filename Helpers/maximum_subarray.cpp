/*
    Problem:
        Find the subarray that has the maximum sum.
    Topics:
        Divide and conquer.
    Time Complexity:
        O(nlogn)
*/
#include <iostream>
#include <tuple>
#define MIN_INT INT32_MIN
using namespace std;
tuple<int,int,int> findMaxCrossingSubarray(int arr[], int low, int mid, int high);
tuple<int,int,int> findMaximumSubarray(int arr[], int low, int high);

int main()
{
    int arr[] = {-2, 6,-3, -1, 5, -3};
    auto [left, right, sum] = findMaximumSubarray(arr, 0, 5);
    cout<<left<<" "<<right<<" "<<sum<<endl;
}

tuple<int,int,int> findMaxCrossingSubarray(int arr[], int low, int mid, int high){
    int leftSum = MIN_INT, rightSum = MIN_INT;
    int leftIndex, rightIndex, sum = 0;
    for(int i = mid; i>=low; i--){
        sum+=arr[i];
        if(sum > leftSum){
            leftSum = sum;
            leftIndex = i;
        }
    }
    sum = 0;
    for(int i = mid+1; i<=high; i++){
        sum+=arr[i];
        if(sum > rightSum){
            rightSum = sum;
            rightIndex = i;
        }
    }
    return {leftIndex, rightIndex, leftSum + rightSum};
}

tuple<int,int,int> findMaximumSubarray(int arr[], int low, int high){
    if(low==high)return {low,high,arr[low]} ;
    int middle = (low+high)/2;
    auto [lind1,rind1,sum1] = findMaximumSubarray(arr,low,middle);
    auto [lind2,rind2,sum2] = findMaximumSubarray(arr, middle+1, high);
    auto [lind3,rind3,sum3] = findMaxCrossingSubarray(arr, low, middle, high);
    if(sum1 >= sum2 && sum1 >= sum3)return {lind1,rind1,sum1};
    if(sum2 >= sum1 && sum2 >= sum3)return {lind2,rind2,sum2};
    return {lind3,rind3,sum3};
}