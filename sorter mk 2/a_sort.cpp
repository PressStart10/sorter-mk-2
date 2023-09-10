// sorter mk 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include <time.h>
#include "sort.hpp"
using namespace std;
const int leng = 100;
int array_to_sort[leng];
int main()
{
    base_sort sorts;
    sorts.shuffle(array_to_sort, leng);
    sorts.printarray(array_to_sort, (sizeof(array_to_sort) / sizeof(*array_to_sort)));
    sorts.sort(array_to_sort, leng - 1);
    sorts.printarray(array_to_sort, leng);
    if (sorts.check(array_to_sort, leng) == true)
        cout << "sort verified!\n\a";
    else
        cout << "sort malfunction :_(\n\a";
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
