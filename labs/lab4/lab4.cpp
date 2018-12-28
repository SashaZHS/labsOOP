// OOPFourthLabA.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <stdlib.h>
#include "time.h"
using namespace std;

template<typename type> class Array {
	type* arr;
	int size;
public:
	void sort() {
		for (int j = 0; j < size - 1; j++) {
			for (int i = 0; i < size - 1; i++) {
				if (arr[i] > arr[i + 1]) {
					type tmp = arr[i];         
					arr[i] = arr[i + 1];  
					arr[i + 1] = tmp;     
				}
			}
		}
	}
	int Search_Interpol(type key)
	{
		sort();
		if (size < 0 || !arr)
			return -1;
		int low = 0;
		int high = size - 1;
		int mid;

		while (!(arr[high] == arr[low] || key < arr[low] || arr[high] < key))
		{
			mid = low + (key - arr[low]) * ((high - low) / (arr[high] - arr[low]));

			if (arr[mid] < key)
				low = mid + 1;

			else if (key < arr[mid])
				high = mid - 1;

			else return mid;
		}

		if (key == arr[low])
			return low;

		else return -1;
	}

	Array(int size) {
		arr = new type[size];
		this->size = size;
		for (int i = 0; i < size; i++) {
			arr[i] = rand() % 100;
		}
		sort();
	}
	
	void print() {
		for (int i = 0; i < size; i++)
			cout << arr[i] << "  ";
	}

	~Array() {
		delete arr;
	}
};
int main()
{
	srand(time(NULL));
	int size;
	cout << "enter size of array" << endl;
	cin >> size;
	Array<int> a(size);
	cout << endl;
	a.print();
	int k;
	cout << endl;
	cout << "Enter a value to search " << endl;
	cin >>k;
	cout <<endl<< a.Search_Interpol(k);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
