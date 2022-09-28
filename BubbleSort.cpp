#include <iostream>
#include <vector>
using namespace std;

void BubbleSort(vector<int> &array)
{
    int n = array.size();
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n - i; ++j) {
            if(array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
