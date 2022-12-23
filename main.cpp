/*
 step 1: start

step 2: declare array and left, right, mid variable

step 3: perform merge function.
    if left > right
        return
    mid= (left+right)/2
    mergesort(array, left, mid)
    mergesort(array, mid+1, right)
    merge(array, left, mid, right)

step 4: Stop
 */

#include <iostream>
using namespace std;


template<typename T>

void Merge(T* arr[],int start,int mid,int end){
    int size1=mid-start+1,size2=end-mid;
    int *arr1=new int[size1];
    int *arr2=new int[size2];

}

template<typename T>
void mergeSort(T* arr[],int start,int end){
    if(start>=end){return;}
    int mid=(end+start)/2;
    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);
    merge(arr,start,mid,end);
}
int main() {
    cout << "Hello, World!" << std::endl;
    return 0;
}
