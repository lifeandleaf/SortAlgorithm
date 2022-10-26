#include <iostream>
#include <vector>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void HeapAdjust(vector<int> &array, int l, int r)
{
    int index = l;
    while(index < r) {
        int a = index * 2;
        int b = index * 2 + 1;
        int c = a;
        if(array[a] < array[b] && b < r) c = b;
        else {
            if(a >= r) return;
        }
        if(array[c] > array[index]) {
            swap(array[index], array[c]);
        }
        index = c;
    }
}

void HeapSort(vector<int> &x)
{
    vector<int> array(x.size() + 1);
    for(int i = 1; i < array.size(); ++i) array[i] = x[i - 1];
    int n = array.size();
    for(int i = n / 2 + 1; i > 0; --i) {
        HeapAdjust(array, i, n);
    }
    for(int i = n - 1; i > 0; --i) {
        swap(array[i], array[1]);
        HeapAdjust(array, 1, i);
    }
    for(int i = 0; i < x.size(); ++i) x[i] = array[i + 1];
}


void cmp(...) {
    
}