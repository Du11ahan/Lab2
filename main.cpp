    
//#include "pch.h"
#include <iostream>
#include <ctime>
#include "func.h"
using namespace std;
int const n = 10;

int main()
{
	int ar[n];		
	int i;		
	int(*pf)(int* a, int num) = NULL;		
	setlocale(LC_ALL, "Russian");

	srand(time(NULL));
	for (i = 0; i < n; i++)
		ar[i] = rand() % 1001 - 500;		

	cout << "Enoiaiue iannea:" << endl;
	for (i = 0; i < n; i++)
		cout << ar[i] << " ";
	cout << endl;

	pf = func(ar, n);
	pf(ar, n);

	cout << endl;
	cout << "Eoiaiaue iannea:" << endl;
	for (i = 0; i < n; i++)
		cout << ar[i] << " ";
	return 0;
}
