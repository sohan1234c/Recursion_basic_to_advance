#include <bits/stdc++.h>
using namespace std;

int sumNnum(int n)
{
if (n==1)
{
    return 1;
}
return (n + sumNnum(n - 1));
}

int main() {

    cout << sumNnum(6) << endl;
    return 0;
}