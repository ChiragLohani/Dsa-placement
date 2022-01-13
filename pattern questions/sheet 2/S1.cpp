#include <iostream>
using namespace std;
int main()
{
    cout << " row size(Odd Number):";
    int size;
    cin >> size;
    int in, out;
    int p= 1;
    for (out = 1; out <= size; out++)
    {
        for (in = 1; in <= size; in++)
        {
            if (in <= p || in >= size - p + 1)
            {
                cout << in;
            }
            else
            {
                cout << " ";
            }
        }
        if (out <= size / 2)
            p++;
        else
            p--;
        cout << "\n";
    }
}
