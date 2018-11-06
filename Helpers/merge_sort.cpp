/*
    Topics:
        Sorting, Divide and conquer.
    Time Complexity:
        
*/

#include <iostream>
#include <vector>

#define sentinel INT32_MAX

using namespace std;

void merge(vector<int> &arr, int start, int middle, int end);
void mergeSort(vector<int> &arr, int start, int end);

int main()
{
    vector<int> arr = {5, 4, 1, 9, 3, 7, 2, 8};
    mergeSort(arr, 0, arr.size() - 1);
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
}

void merge(vector<int> &arr, int start, int middle, int end)
{
    int n1 = middle - start + 1;
    int n2 = end - middle;
    vector<int> fhalf(n1 + 1);
    vector<int> shalf(n2 + 1);
    for (int i = 0; i < n1; i++)
        fhalf[i] = arr[start + i];
    for (int i = 0; i < n2; i++)
        shalf[i] = arr[middle + i + 1];
    fhalf[n1] = sentinel;
    shalf[n2] = sentinel;
    int f = 0;
    int s = 0;
    for (int i = 0; i < n1 + n2; i++)
    {
        if (fhalf[f] <= shalf[s])
        {
            arr[i + start] = fhalf[f];
            f++;
        }
        else
        {
            arr[i + start] = shalf[s];
            s++;
        }
    }
}

void mergeSort(vector<int> &arr, int start, int end)
{
    if (start == end)
        return;
    int middle = (start + end) / 2;
    mergeSort(arr, start, middle);
    mergeSort(arr, middle + 1, end);
    merge(arr, start, middle, end);
}
