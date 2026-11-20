#include <bits/stdc++.h>
using namespace std;

void index(int n)
{
    if(n==1)
    {
        cout << 1;
        return ;
    }

    cout << n << endl;
    index(n - 1);
}

int main() {
    index(100);
    return 0;
}