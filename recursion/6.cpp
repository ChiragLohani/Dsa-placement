#include <iostream>
using namespace std;

double sum_recursive(int n)
{
    if (n <= 0) {
        return 0.0;
    } else {
        cout << "1/" << n << (n!=1 ? " + " : " = "); // just for debugging
        return (1.0 / double(n)) + sum_recursive(n-1);
    }
}

int main()
{
 int x;
    cin>>x;
    cout << sum_recursive(x) << " (recursive)" << endl;
    return 0;
}
