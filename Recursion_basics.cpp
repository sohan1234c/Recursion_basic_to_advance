#include <bits/stdc++.h>
using namespace std;

void print(int n)
{
    if (n == 6)
        return;

    cout << n << endl;

    print(n + 1);
}

int main()
{
    print(1);

    return 0;
}