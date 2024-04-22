#ifndef ALGORI_H
#define ALGORI_H
#include <bits/stdc++.h>
using namespace  std;

template <typename  T>
void printVector(const vector<T>&vec) {
    cout<<"[";
    for(auto i = 0 ; i < vec.size() ; i++) {
        cout<<vec[i];
        if(i < vec.size()-1) cout<<",";
    }
    cout<<"]"<<endl;
}

void quick_sort( vector<int> &arr , int i , int j);

class topK {
public:
    topK(){};

    void maxHeapify(vector<int> & a, int cur , int heapSize){
        int left_node = cur*2 + 1 , right_node = cur*2 + 2, largest = cur;
        if( left_node < heapSize && a[left_node] > a[largest])  largest = left_node;
        if( right_node < heapSize && a[right_node] > a[largest])  largest = right_node;
        if( largest != cur ){
            swap(a[cur],a[largest]);
            maxHeapify(a,largest,heapSize);
        }
    }

    void buildMaxHeap(vector<int>& a, int heapSize ){
        for(int i = heapSize /2 ; i >=0 ; i--){
            maxHeapify(a, i , heapSize);
        }
    }

    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        buildMaxHeap(nums,n);
        for(int i = nums.size()-1; i >= nums.size()-k+1 ; i--){
            swap(nums[0],nums[i]);
            n--;
            maxHeapify(nums,0,n);
        }
        return nums[0];
    }
};



#endif //ALGORI_H
