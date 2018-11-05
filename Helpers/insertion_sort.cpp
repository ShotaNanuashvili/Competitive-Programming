#include <iostream>
#include <vector>

//insertion sort example
using namespace std;
int main()
{
    vector<int> arr = {5, 4, 1, 9, 3, 7, 2, 8};
    for (int i = 1; i < arr.size(); i++)
    {
        int key = arr[i];
        int j = i - 1;
        for (; arr[j] > key && j >= 0; j--)
        {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = key;
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}