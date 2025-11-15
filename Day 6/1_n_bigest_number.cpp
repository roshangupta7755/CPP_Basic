#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    int a[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
 
    int max1;
	cout<<"Enter number: ";
	cin>>max1;
	int caunt = 0;
    for (int i = 0; i < n; i++)
	{
		if (max1 < a[i])
		{
			caunt++;
		}
		
	}
	cout<<"The number is greter = "<<caunt<<" ";
	return 0;
}
