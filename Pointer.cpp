#include "Pointer.h"
#include <iostream>


void inputArray(int* &a, int &n)
{
	std::cout << "Nhap mang: ";
	for (int i = 0; i < n; i++)
	{
		std::cin >> *(a + i);
	}
}

void dellocateArray(int* &a)
{
	delete[] a;
}

void printArray(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cout << *(a + i);
	}
}

int findMin(int* a, int n)
{
	int min = a[0];

	for (int i = 1; i < n; i++)
	{
		if (a[i] < min)
			min = a[i];
	}

	return min;
}

int modulus(int a)
{
	return a > 0 ? a : -a;
}
int findMaxModulus(int* a, int n)
{
	int maxModulus = 0;

	for (int i = 0; i < n; i++)
	{
		if (modulus(a[i]) > maxModulus)
			maxModulus = modulus(a[i]);
	}
	
	return maxModulus;
}

bool isAscending(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] > a[i + 1])
			return false;
	}
	return true;
}

int sumOfArray(int* a, int n)
{
	if (n = 1)
		return a[0];
	return a[n - 1] + sumOfArray(a, n - 1);
}

bool isPrime(int n)
{
	if (n <= 1)
		return false;

	// Check from 2 to n-1 
	for (int i = 2; i < n; i++)
		if (n % i == 0)
			return false;

	return true;
}
int countPrime(int* a, int n)
{
	int count = 0;

	for (int i = 0; i < n; i++)
	{
		count += isPrime(a[i]);
	}
}

void ReverseArray(int* &a, int n)
{
	int temp;

	for (int i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}

int linearSearch(int* a, int n, int key)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] == key)
			return i;
	}

	return -1;
}

int sentinelLinearSearch(int* a, int n, int key)
{
	int last = a[n - 1];
	a[n - 1] = key;

	int i;

	while (a[i] != key)
	{
		i++;
	}

	a[n - 1] = last;

	if ((i < n - 1) || (key == a[n - 1]))
		return i;
	else return -1;
}

int binarySearch(int* a, int n, int key)
{
	int first = 0;
	int last = n - 1;
	int mid = (first + last) / 2;

	while (first <= last)
	{
		if (a[mid] < key)
			first = mid + 1;
		else if (a[mid] == key)
			return mid;
		else
			last = mid - 1;

		mid = (first + last) / 2;

	}
	if (first > last)
		return -1;
}

int recursiveBinarySearch(int* a, int left, int right, int key){	if (right >= left)	{		int mid = left + (right - left) / 2;				if (a[mid] == key)			return mid;		else if (a[mid] > key)			return recursiveBinarySearch(a, left, mid - 1, key);		return recursiveBinarySearch(a, mid + 1, right, key);	}	return -1;}