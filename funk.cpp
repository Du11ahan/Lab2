//#include "pch.h"
#include <iostream>
#include "func.h"
using namespace std;

int(*func(int* a, int num))(int* a, int num)  
{
	int sum = 0;
	for (int i = 1; i < num; i++)
		sum += a[i];
	cout << "Noiia = " << sum << endl;
	if (sum == a[0])
		return(f1);
	if (sum > a[0])
		return(f2);
	return(f3);
}

int f1(int* a, int num)   
{
	int t;
	for (int i = 0; i < num / 2; i++)
	{
		t = a[i];
		a[i] = a[num - i - 1];
		a[num - i - 1] = t;
	}
	return 0;
}

int f2(int* a, int num)       
{
	int t;
	for (int i = 0; i < num - 1; i++)
		for (int j = i + 1; j < num; j++)
			if (a[j] < a[i])
			{
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
	return 0;
}

int f3(int* a, int num)    
{
	int t;
	for (int i = 0; i < num - 1; i++)
		for (int j = i + 1; j < num; j++)
			if (a[j] > a[i])
			{
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
	return 0;
}
