// sorting algorithm.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <time.h>

using namespace std;

vector <int> result;
int p;

/* Bubble Sort Algorithm */
vector <int> bubble_sort(vector <int> unsorted) {
    for(int j = 0;j <= unsorted.size();j++){
        for (int i = 1; i < unsorted.size(); i++) {
            if (unsorted[i - 1] > unsorted[i])
            {
                p = unsorted[i - 1];
                unsorted[i - 1] = unsorted[i];
                unsorted[i] = p;
            }
        }
    }
    return unsorted;
}

/* Insertion Sort Algorithm */
vector <int> insertion_sort(vector <int> unsorted) {
    int i;
    for (int j = 1; j < unsorted.size(); j++) {
        p = unsorted[j];
        i = j - 1;
        while (i >= 0 && unsorted[i] > p) {
            unsorted[i + 1] = unsorted[i];
            i = i - 1;
        }
        unsorted[i + 1] = p;
    }
    return unsorted;

}

/* Print the vector */
void print(vector <int> sorted) {
    for (int i = 0; i < sorted.size(); i++) {
        cout <<sorted[i];
        cout << " ";
    }
}


int main()
{
    char n;
    cout << "Enter the choice: ";
    cin >> n;
    vector <int> list = {10,6,4,1,3,8,2,5,25,35,42,100,10,6,58};

    switch (n)
    {
    case '1':
        result = bubble_sort(list);
        cout << "Using Bubble Sort"<< endl;
        break;
    case '2':
        result = insertion_sort(list);
        cout << "Using Insertion Sort"<< endl;
        break;

    default:
        cout << "invalid";

    }
    
    print(result);

}

