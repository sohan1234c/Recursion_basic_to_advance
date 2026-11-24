#include <bits/stdc++.h>
using namespace std;

int binaryser(vector<int> arr, int item)
{
    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (mid == item)
        {
            return mid;
        }
        else if (mid < item)
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
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    cout << binaryser(arr, 9);
    return 0;
}