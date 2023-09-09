// sorter mk 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include <time.h>
using namespace std;
const int leng = 10;
int array_to_sort[leng];
int shuffle(int* shufflearray,int n) {
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        shufflearray[i] = i + 1;
    }
    return 0;
}
void printarray(int *ar, int len) {
    for (int i = 0; i < len; i++) {
        cout << ar[i] << " : ";
    }
    cout << endl;
}
int main()
{
    shuffle(array_to_sort, leng);
    printarray(array_to_sort, (sizeof(array_to_sort) / sizeof(*array_to_sort)));
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

