#include "algori.h"
#include <bits/stdc++.h>
using namespace  std;

void quick_sort( vector<int> &arr , int i , int j) {
    if( i >= j) return;
    int left = i , right = j;
    int pivot = arr[left];
    while( left < right) {
        while( left<right && arr[right] > pivot) right--;
        if( left < right) {
            arr[left] = arr[right];
            left++;
        }
        while( left<right && arr[left] < pivot) left++;
        if( left < right) {
            arr[right] = arr[left];
            right--;
        }
    }
    arr[left] = pivot;
    quick_sort(arr,i,left-1);
    quick_sort(arr,left+1,j);
}


