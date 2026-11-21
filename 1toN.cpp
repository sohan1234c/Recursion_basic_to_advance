#include <bits/stdc++.h>
using namespace std;

int  onetoN(int n)
{

    if (n==1)
    {
        return 1;
    }
    
    return n;
    onetoN(n + 1);
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= onetoN(n);i++)
       {
           cout << onetoN(i) << endl;
       }
    return 0;
}