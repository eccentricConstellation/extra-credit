/*
 *        File: array.cc
 *      Author: Emma Rice
 *        Date: March 18, 2019
 * Description: Array example
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

//function prototypes

void printArray(const int numbers[], int size);
int countEven(const int array[], int size);
int sumElements(const int array[], int size);

int main(int argc, char const *argv[]) {

    int numbers[8] = {3, 5, 19, 6, 7, 6, 55};
    int size = 7;
    printArray(numbers, size);

    cout << numbers[0] << endl;
    cout << "Number of evens: " << countEven(numbers, size) << endl;
    cout << "Sum of all elements: " << sumElements(numbers, size) << endl;

    return 0;
}// main

void printArray(const int numbers[], int size) {
    for(int i = 0; i < size; i++)
    {
        cout << numbers[i] << endl;
    }
}

int countEven(const int array[], int size)
{
	int count(0), i;

	for (i = 0; i < size; i++)
	{
		if (array[i] % 2 == 0)
		{
			count++;
		}
	}

	return count;
} //countEven

int sumElements(const int array[], int size)
{
	int sum(0), i;

	for (i = 0; i < size; i++)
	{
		sum = sum + array[i];
	}

	return sum;
} //sumElements

/*
 * Extra Credit:
 *     Add the following two functions:
 *     1. A function called countEven that counts and returns the number
 *        of evan values in the array numbers.
 *     2. A function to find and return the total of all the values in the array numbers.
 *
 *     Test your functions by calling them in the main function. These functions should work for
 *     any array size.
 *
 * To submit the extra credit, you must create a public repository on GitHub and tag me (@nasseef) when
 * you are done.  This extra credit is due at 11:59 PM Monday 3/18/2019.
 */