#include <stdio.h>
#include 

#include <math.h>

bool isprime(int n) {
	if (n <= 1) return false;
	if (n <= 3) return true;
	if (n % 2 == 0 || n % 3 == 0) return false;
	for (int i = 5; i * i <= n; i += 6) {
		if (n % i == 0 || n % (i + 2) == 0) return false;
	}
	return true;
}

// Has a bug
void first_n_primes(int n, int primes[n])
{
	int i = 2;
	for(int i = 3; i < 2*n+3; i+=2) {
		int index = (i - 3)/2;
		printf("%d\n", index);
		if(isprime(i)) {
			primes[index] = i;
		}
	}
	//return primes;

}

int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	int primes[n];
	first_n_primes(n, primes);
	for(int i = 0; i < n; i++) {
		printf("%d\n", primes[i]);
	}
}


