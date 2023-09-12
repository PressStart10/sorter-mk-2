// sorter mk 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include <time.h>
#include <vector>
#include "array_sort.hpp"
#include "vector_sort.hpp"
using namespace std;
const int leng = 100;
int array_to_sort[leng];
int main()
{
    base_sort sorts;
    vector_base_sort vsorts;
    int a = 0;
    /*sorts.shuffle(array_to_sort, leng);
    sorts.printarray(array_to_sort, (sizeof(array_to_sort) / sizeof(*array_to_sort)));
    sorts.sort(array_to_sort, leng - 1);
    sorts.printarray(array_to_sort, leng);
    if (sorts.check(array_to_sort, leng) == true)
        cout << "sort verified!\n\a";
    else
        cout << "sort malfunction :_(\n\a";*/
    cout << "set length of array 1-200.[type]";
    cin >> a;
    if (!cin.good()) {
        cerr << "I have saved your RAM. input a number next time\n";
        return 0;
    }
    while (true) {
        if ((a < 1) || (a > 200)) {
            cerr << "please enter a valid number.[type]";
            cin >> a;
            continue;
        }
        break;
    }
    vector<int> vec(a);
    vsorts.shuffle(vec, vec.size());
    if (vsorts.check(vec, vec.size()) == true) {
        cerr << "shuffle not random\n";
        return 011;
    }
    else {
        cout << "suffle randomized (trust me bro)\nwould you like to see the shuffled array?[y/n]";
        string c;
        cin >> c;
        while (true) {
            if (c == "y") {
                vsorts.printarray(vec, vec.size());
                break;
            }
            else if ((c != "y") && (c != "n")) {
                cerr << "please enter an option.[y/n]";
                cin >> c;
                continue;
            }
            break;
        }
    }
    vsorts.sort(vec, vec.size()-1);
    if (vsorts.check(vec, vec.size()) == true) {
        cout << "sorted!\nwould you like to see the sorted array?[y/n]";
        string d;
        cin >> d;
        while (true) {
            if (d == "y") {
                vsorts.printarray(vec, vec.size());
                break;
            }
            else if ((d != "y") && (d != "n")) {
                cerr << "please enter an option.[y/n]";
                cin >> d;
                continue;
            }
            break;
        }
    }
    else {
        cout << "dude im sorry, it didn't work\n";
            return 0;
    }
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
