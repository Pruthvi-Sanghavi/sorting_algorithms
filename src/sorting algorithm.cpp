/*
 *@file sorting algorithm.cpp
 *@author Pruthvi Sanghavi
 *@brief various sorting algorithms
 *@copyright 2021 Pruthvi Sanghavi
*/
#include "../sorting algorithm/functions.h"

vector <int> result;

/* Bubble Sort Algorithm */
vector <int> bubble_sort(vector <int> unsorted) {
    for(int j = 0;j <= 5;j++){
        for (int i = 1; i < unsorted.size(); i++) {
            if (unsorted[i-1] > unsorted[i])
            {
                p = unsorted[i-1];
                unsorted[i-1] = unsorted[i];
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

/* Cocktail Shaker Sort Algorithm */
vector <int> cocktail_sort(vector <int> unsorted) {
    int q = 0;
    for (int i = 0; i <= 5; i++) {
        for (int j = 1 ; j < unsorted.size(); j++) {
            if (unsorted[j - 1] > unsorted[j]) {
                p = unsorted[j - 1];
                unsorted[j - 1] = unsorted[j];
                unsorted[j] = p;
            }
        }

        for (int k = unsorted.size() - 1; k < 0; k--) {
            if (unsorted[k - 1] > unsorted[k]) {
                q = unsorted[k - 1];
                unsorted[k - 1] = unsorted[k];
                unsorted[k] = q;
            }
        }
    }
    return unsorted;
}

/* Gnome Sort Algorithm */
vector <int> gnome_sort(vector <int> unsorted) {
    int pos = 0;
    while (pos < unsorted.size()) {
        if (pos == 0 || unsorted[pos] >= unsorted[pos - 1]) {
            pos = pos + 1;
        }
        else
        {
            p = unsorted[pos];
            unsorted[pos] = unsorted[pos - 1];
            unsorted[pos - 1] = p;
            pos = pos - 1;
        }
    }
    return unsorted;
}

/* Selection Sort Algorithm */
vector <int> selection_sort(vector <int> unsorted) {

    return unsorted;
}

/* Merge Sort Algorithm */
vector <int> merge_sort(vector <int> unsorted) {
    vector <int> sorted;
    int q;
    firsthalf, secondhalf = split(unsorted);
    for (int i = 0; i < firsthalf.size(); i++) {
         

    }
    
    return sorted;
}


int main()
{
    char n;
    cout << "Enter the choice: ";
    cin >> n;
    vector <int> list = {3,4,6,8,1,5,2,7};

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

    case '3':
        result = cocktail_sort(list);
        cout << "Using Cocktail Shaker Sort" << endl;
        break;

    case '4':
        result = gnome_sort(list);
        cout << "Using Gnome Sort" << endl;
        break;

    case '5':
        result = merge_sort(list);
        cout << "Using Merge Sort" << endl;
        break;

    case '6':
        firsthalf, secondhalf = split(list);
        break;


    default:
        cout << "invalid";
    }
    
    print(result);
    //print(firsthalf);
    
}

