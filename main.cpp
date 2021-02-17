#include <iostream>
#include <vector>

using namespace std;

vector <long long int> ar({1, 1});

long long int fib(int n)
{
	if (n > ar.size()) return fib(n - 1) + fib(n - 2);
	else if (n == ar.size()) {
		ar.push_back(ar[n - 1] + ar[n - 2]);
	}
	return ar[n];
}

int main()
{
	int n;
	cin >> n;

	if (n < 0) cout << 0;
	else cout << fib(n);
}