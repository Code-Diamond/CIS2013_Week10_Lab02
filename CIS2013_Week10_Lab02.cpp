#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int len;
	int cont = 1;
	while(cont != 0)
	{
		cout << endl << "How long do you want your array?" << endl;

		cin >> len;

		int *a;
		a = new int[len];

		for(int i = 0; i < len; i++)
		{
			cout << "Int number " << i << " should be: ";
			cin >> a[i];
		}

		cout << endl << "Your list of numbers is:\n";

		for(int x =0; x < len; x++)
		{
			cout << a[x] << endl;
		}

		cout << "Do you want to continue?: Y=1, N=0";
		cin >> cont;		
		delete[] a;
	}

	return 0;
}