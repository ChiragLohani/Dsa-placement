#include <iostream>
using namespace std;

int main()
{
	int n; int space = 1;

	cout << "Enter the number of rows : ";
	cin >> n;

	
		space =n-1;

	for (int k = 1; k <= n; k++)
	{
		for (int c = 1; c <= space; c++)
			cout <<" ";
      	space--;
		for (int c = 1; c <= 2*k-1; c++)
			cout << "*";
		cout << endl;
}
	space = 1;
	for(int k = 1; k <= (n-1); k++)
	{
		for (int c = 1; c <= space; c++)
			cout << " ";
		space++;
		for (int c = 1 ; c <= 2*(n-k)-1; c++)
          cout << "*";
		cout << endl;
	}
	return 0;
}
