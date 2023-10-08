// Program to print all prime factors
# include <stdio.h>
# include <math.h>
	
// A function to print all prime factors of a given number n
void primeFactors(int n)
{
	// Print the number of 2s that divide n
	while (n%2 == 0)
	{
		printf("%d ", 2);
		n = n/2;
	}
	
	// n must be odd at this point. So we can skip
	// one element (Note i = i +2)
	for (int i = 3; i <= sqrt(n); i = i+2)
	{
		// While i divides n, print i and divide n
		while (n%i == 0)
		{
			printf("%d ", i);
			n = n/i;
		}
	}
	
	// This condition is to handle the case when n
	// is a prime number greater than 2
	if (n > 2)
		printf ("%d ", n);
}
	
/* Driver program to test above function */
int main()
{
	int n = 315;
	primeFactors(n);
	return 0;
}



// optimized solution 

#include <iostream>
#include <limits.h>
using namespace std;

 void printPrimeFactors(int n)
{
	if(n <= 1)
		return;

	while(n % 2 == 0)
	{
		cout<<2<<" ";

		n = n / 2;
	}

	while(n % 3 == 0)
	{
		cout<<3<<" ";

		n = n / 3;
	}

	for(int i=5; i*i<=n; i=i+6)
	{
		while(n % i == 0)
		{
			cout<<i<<" ";

			n = n / i;
		}

		while(n % (i + 2) == 0)
		{
			cout<<(i + 2)<<" ";

			n = n / (i + 2);
		}
	}

	if(n > 3)
		cout<<n<<" ";

	cout<<endl;
}

int main() {
    
    	int n = 315;
    	
    	printPrimeFactors(n);
    	
    	return 0;
}