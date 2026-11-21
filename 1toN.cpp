#include <bits/stdc++.h>
using namespace std;

int onetoN(int n)
{

    if (n==1)
    {
        return 1;
    }
    
    return n;
    1toN(n+1);
    
}

int main() {
   
    cout << onetoN(5)<<endl;
    return 0;
}