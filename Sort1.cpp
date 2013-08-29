// ConsoleApplication10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

#define NUM 10

void printArray(int num[], int count)
{
	for (int i=0; i<count; ++i) {
		cout << num[i] << " ";
	}
	cout << endl;
}

int _tmain(int argc, _TCHAR* argv[])
{
	int numb[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	int i, j;

	/*
	for (i=0; i<NUM; ++i)
	{
		cout << "Enter number: ";
		cin >> numb[i];
	}
	*/

	printArray(numb, NUM);

	for (i=0; i<NUM-1; ++i)
	{
		for (j=i+1; j<NUM; ++j)
		{
			int temp; 

			if (numb[i]>numb[j]) 
			{
				temp = numb[i];
				numb[i] = numb[j];
				numb[j] = temp; 
				printArray(numb, NUM);
			}
		}	
	}

	printArray(numb, NUM);
	cin >> j;

	return 0;
}



