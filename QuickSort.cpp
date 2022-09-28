#include <iostream>
#include <vector>
using namespace std;

void QuickSort(vector<int> &array, int l, int  r)
{
    if(r - l <= 1) return;
    // for(int i = l; i <= r; ++i) cout << array[i] << " ";
    // cout << endl;
    int orn = l, i = l + 1, j = r;
    while(i < j) {
        while(i < r && array[i] <= array[orn]) i++;
        while(j > l && array[j] >= array[orn]) j--;
        if(i < j) {
            int temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
    }
    int temp = array[j];
    array[j] = array[orn];
    array[orn] = temp;
    QuickSort(array, l, j);
    QuickSort(array, j + 1, r);
}