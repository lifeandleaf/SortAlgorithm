#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &array, int l, int r, int mid)
{
    vector<int> buffer(array.size());
    int i = l, j = mid + 1, index = l;
    while(i <= mid && j <= r) {
        if(array[i] <= array[j]) {
            buffer[index++] = array[i++];
        }
        else {
            buffer[index++] = array[j++];
        }
    }
    while(i <= mid) buffer[index++] = array[i++];
    while(j <= r) buffer[index++] = array[j++];
    index = l;
    while(index <= r) {
        array[index] = buffer[index];
        index++;
    }
}

void MergeSort(vector<int> &array, int l, int r)
{
    if(l >= r) return;
    int mid = (l + r) >> 1;
    MergeSort(array, l, mid);
    MergeSort(array, mid + 1, r);
    merge(array, l, r, mid);
}