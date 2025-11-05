#include <iostream>
using namespace std;
int main()
{
	int x;
	cout << "Enter a number: ";
	cin >> x;
	 
	 
	for (int i = 1; i <= x; i++){
		for (int j = 1; j <= i; j++)
		{
			 if (i%2==0)
			 {
				cout<<(char)(j+64)<<"  ";
			 }
			 else{
				cout<<"*  ";
			 }
		}
		cout<<endl;
	}

	return 0;
}