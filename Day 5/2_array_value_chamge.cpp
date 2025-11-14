#include <iostream>
using namespace std;

int change(int a[]){
	a[0] = 100;
}

int main() {
	int n;
	cout<<"Enter a number : ";
	cin>>n;
    int a[n];
	cout<<"Enter "<<n<<" "<<"elements: ";
	for (int i = 0; i < n; i++)
	{
		cin>>a[i];
	}
    change(a);
	for (int i = 0; i < n; i++)
	{
		cout<<a[i]<<" ";
	}
	
    return 0;
}
