// sorting algorithm.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

vector <int> bubble;
int p;

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

void print(vector <int> sorted) {
    for (int i = 0; i < sorted.size(); i++) {
        cout <<sorted[i];
        cout << " ";
    }
}


int main()
{
    vector <int> list = {10,6,4,1,3,8,2,5,25,35,42,100,10,6,58};
    bubble = bubble_sort(list);
    cout << "The sorted array: " << endl;
    print(bubble);
}

