#include <iostream>
using namespace std;
int main()
{
    int i, j, a = 0, b = 1, c = a + b;
    cout << "Enter the row size :";
    int size;
    cin >> size;
    for (i = 1; i <= size; i++)
    {
        for (j= 1; j <= i; j++)
        {
            cout << c << " ";
           
            c = a + b;
            a = b;
            b = c;
        }
        cout << endl;
    }
}
