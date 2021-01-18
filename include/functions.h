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

/* Input function */
vector <int> input() {
    char c;
    vector <int> list;
    cout << "Enter the numbers separated by commas";
    cin >> c;
    list.push_back(c);
    return list;
}
