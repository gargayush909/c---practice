// C++ implementation of Naive method to print all
// divisors
#include <iostream>
using namespace std;

// function to print the divisors
void printDivisors(int n)
{
	for (int i = 1; i <= n; i++)
		if (n % i == 0)
			cout <<" " << i;
}

/* Driver program to test above function */
int main()
{
	cout <<"The divisors of 100 are: \n";
	printDivisors(100);
	return 0;
}



//optimized 

// A Better (than Naive) Solution to find all divisors
#include <iostream>
#include <math.h>
using namespace std;

// Function to print the divisors
void printDivisors(int n)
{
	// Note that this loop runs till square root
	for (int i=1; i<=sqrt(n); i++)
	{
		if (n%i == 0)
		{
			// If divisors are equal, print only one
			if (n/i == i)
				cout <<" "<< i;

			else // Otherwise print both
				cout << " "<< i << " " << n/i;
		}
	}
}

/* Driver program to test above function */
int main()
{
	cout <<"The divisors of 100 are: \n";
	printDivisors(100);
	return 0;
}



// on sorted order 

// A O(sqrt(n)) program that prints all divisors
// in sorted order
#include <iostream>
#include <math.h>
using namespace std;

// Function to print the divisors
void printDivisors(int n)
{
	int i;
	for (i = 1; i * i < n; i++) {
		if (n % i == 0)
			cout<<i<<" ";
	}
	if (i - (n / i) == 1) {
		i--;
	}
	for (; i >= 1; i--) {
		if (n % i == 0)
			cout<<n / i<<" ";
	}
}

// Driver code
int main()
{
	cout << "The divisors of 100 are: \n";

	printDivisors(100);

	return 0;
}