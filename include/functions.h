#pragma once
#include <iostream>
#include <vector>
using namespace std;

vector <int> firsthalf;
vector <int> secondhalf;
int p;


/* Split function */
vector <int> split(vector <int> unsorted) {

    for (int i = 0; i < unsorted.size() / 2; i++) {
        firsthalf.push_back(unsorted[i]);

    }
    for (int j = unsorted.size() / 2 + 1; j < unsorted.size() - 1; j++) {
        secondhalf.push_back(unsorted[j]);
    }

    return firsthalf, secondhalf;

}

/* return min(array) */
int min(vector <int> unsorted) {
    int itr = 0;
    p = unsorted[0];
    for (int i = 0; i < unsorted.size(); i++) {
        if (unsorted[i] < p) {
            p = unsorted[i];

        }
    }
    return p;
}

/* Print the vector */
void print(vector <int> array) {
    for (int i = 0; i < array.size(); i++) {
        cout << array[i];
        cout << " ";
    }
}
