#include <iostream>
using namespace std;

int main()
{
	int n, s=0;
	cout << "Enter a number : ";
	cin >> n;
	int a[n];
	cout << "Enter " << n << " " << "elements: ";
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		s = s + a[i];
	}

	cout<<"Sum of array element = "<<s<<" ";

	return 0;
}
