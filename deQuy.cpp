#include "deQuy.h"

// 1^2 + 2^2 + ... + n^2 
int sumOfSquares(int n)
{
	if (n == 1)
		return 1;

	return n * n + sumOfSquares(n - 1);
}
//UCLN
int gcd(int a, int b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);
}
//Kiem tra doi xung
bool isPalindrome(int a[], int n)
{
	if (n < 2)
		return true;

	if (a[0] != a[n - 1])
		return false;

	isPalindrome(&a[0] + 1, n - 2);
}


int Factorial(int n)
{
	if (n == 0)
		return 1;

	return Factorial(n - 1) * n;
}

int countDigit(int a)
{
	if (a == 0)
		return 0;
	return 1 + countDigit(a / 10);
}

int FIB(int n)
{
	if (n == 1 || n == 2)
		return 1;

	return FIB(n - 1) + FIB(n - 2);
}