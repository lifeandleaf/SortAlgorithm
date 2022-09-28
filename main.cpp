#include <iostream>
#include "BubbleSort.cpp"
#include "SelectSort.cpp"
#include "MergeSort.cpp"
#include "QuickSort.cpp"
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

void getArray(vector<int> &array) 
{
    srand(time(0));
    int n = array.size();
    for(int i = 0; i < n; ++i) {
        array[i] = rand();
    }
}

void show(vector<int> &array)
{
    int n = array.size();
    for(int i = 0; i < n; ++i)
        cout << array[i] << " ";
    cout << endl;
}

int main()
{
    vector<int> array(10);
    getArray(array);
    show(array);
    // BubbleSort(array);
    // SelectSort(array);
    // MergeSort(array, 0, array.size() - 1);
    QuickSort(array, 0, array.size() - 1);
    show(array);
    return 0;
}