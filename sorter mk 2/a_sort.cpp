// sorter mk 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include <time.h>
using namespace std;
const int leng = 10;
int array_to_sort[leng];
void swap(int* ar, int index1, int index2) {
    int indexs1 = ar[index1];
    int indexs2 = ar[index2];
    ar[index1] = indexs2;
    ar[index2] = indexs1;
}
int shuffle(int* shufflearray,int n) {
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        shufflearray[i] = i+1;
    }
    //is this unnessisary? yes. do I care? no. will I change it? probably not.
    for (int i = 0; i < n; i++) {
        swap(shufflearray, i, rand() % n);
    }
    return 0;
}
void printarray(int *ar, int len) {
    for (int i = 0; i < len; i++) {
        cout << ar[i] << " : ";
    }
    cout << endl;
}
void sort(int* ar, int len) {
    int correct = 0;
    while (correct != len) {
        for (int i = 0; i < len; i++) {
            if ((ar[i] > ar[i + 1])) {
                swap(ar, i, i + 1);
            }
        }
        for (correct = 0; correct < len; correct++) {
            if (ar[correct] > ar[correct + 1]) {
                break;
            }
        }
    }
}
int main()
{
    shuffle(array_to_sort, leng);
    printarray(array_to_sort, (sizeof(array_to_sort) / sizeof(*array_to_sort)));
    sort(array_to_sort, leng - 1);
    printarray(array_to_sort, leng);
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

