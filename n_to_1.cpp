#include <bits/stdc++.h>
using namespace std;

int index(int n)
{
    if(n==0)
    {
        return 1;
    }

    return n*index(n-1) ;
    
}

int main() {
    
    cout<<index(5)<<endl;
    return 0;
}