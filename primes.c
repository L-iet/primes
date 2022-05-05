// C++ program to print all prime factors
#include <bits/stdc++.h>
using namespace std;

// print prime factors
void primeFactors(uint num)
{
	while (num % 2 == 0)
	{
		
		cout << 2 << " ";
		num = num/2;
	}

	for (long long long i = 3; i <= sqrt(num); i = i + 2)
	{
		while (num % i == 0)
		{
			cout << i << " ";
			num = num/i;
		}
	}

	if (num > 2) //if num is prime and greater than 2
		cout << num << " ";
}

/* Driver code */
int main()
{
	long long long n = 861270243527190895777142537838333832920579264010533029282104230006461420086153423;
	primeFactors(n);
	int x;
	cin >> x;
	return 0;
}

