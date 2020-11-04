#ifndef _POINTER
#define _POINTER
void inputArray(int* &a, int &n);
void dellocateArray(int* &a);
void printArray(int* a, int n);
int findMin(int* a, int n);
int findMaxModulus(int* a, int n);
bool isAscending(int* a, int n);
int sumOfArray(int* a, int n);
int countPrime(int* a, int n);
void ReverseArray(int* &a, int n);
int linearSearch(int* a, int n, int key);
int sentinelLinearSearch(int* a, int n, int key);
int binarySearch(int* a, int n, int key);
int recursiveBinarySearch(int* a, int left, int right, int key);
#endif
