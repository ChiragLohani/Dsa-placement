#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
ll sum(int n)
{
 
    
    if (n == 1)
        return 1;
    else
 
        
        return ((ll)pow(n, n) + sum(n - 1));
}
 

int main()
{
    int n = 2;
    cout << sum(n);
 
    return 0;
}
