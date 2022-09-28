#include <iostream>
#include <vector>
using namespace std;

void SelectSort(vector<int> &array)
{
    int n = array.size();
    for(int i = 0; i < n; ++i) {
        for(int j = i + 1; j < n; ++j) {
            if(array[i] > array[j]) {
                int temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }
}