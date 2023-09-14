#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n;
	cin >> n;
	int even = 0;
	int odd = 0;

	while(n != 0)
	{
		int rem = n%10;
		if (rem%2==0)
		{
			even += rem;
		} else {
			odd += rem;
		}
		n/=10;
	}
	cout << even << " " << odd;

	return (0);
}
