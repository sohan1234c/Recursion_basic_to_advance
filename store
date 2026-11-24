#include <bits/stdc++.h>
using namespace std;
int binarysearch(vector<int>& arr, int item)
{
    int start = 0, end = arr.size() - 1;
    

    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == item)
        {
            return mid;
        }
        else if (arr[mid] < item)
        {
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        
    }
    return -1;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    cout << binarysearch(arr, 5);

    return 0;
}