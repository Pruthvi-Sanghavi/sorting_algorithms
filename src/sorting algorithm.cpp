/*
 *@file sorting algorithm.cpp
 *@author Pruthvi Sanghavi
 *@brief various sorting algorithms
 *@copyright 2021 Pruthvi Sanghavi
*/

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

/* Cocktail Shaker Sort Algorithm */
vector <int> cocktail_sort(vector <int> unsorted) {

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
    p = unsorted[unsorted.size() / 2];

    
    return sorted;
}

/* Split function */
vector <int> split(vector <int> unsorted) {
    vector <int> firsthalf;
    vector <int> secondhalf;
    for (int i = 0; i < unsorted.size()/2; i++) {
        firsthalf.push_back(unsorted[i]);
     
    }
    for (int j = unsorted.size()/2 + 1; j < unsorted.size() - 1; j++) {
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
        cout <<array[i];
        cout << " ";
    }
}



int main()
{
    char n;
    cout << "Enter the choice: ";
    cin >> n;
    vector <int> list = {56,65,5,1,};

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


    default:
        cout << "invalid";
    }
    
    print(result);

    
}

