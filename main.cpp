/*
*If the size of the array is less than or equal to 1, return.
*Find the midpoint of the array.
*Recursively sort the left subarray (from index 0 to midpoint - 1).
*Recursively sort the right subarray (from index midpoint to size - 1).
*Allocate a temporary array of the same size as the original array.
*Initialize three variables i, j, and k to 0. i and j will be used to iterate through the left and right subarrays,
 respectively, and k will be used to iterate through the temporary array.
*While i is less than the size of the left subarray and j is less than the size of the right subarray:
*If the element at index i in the left subarray is less than the element at index j in the right subarray,
 copy the element at index i to the temporary array and increment i and k.
*Otherwise, copy the element at index j to the temporary array and increment j and k.
*While i is less than the size of the left subarray:
*Copy the element at index i to the temporary array and increment i and k.
*While j is less than the size of the right subarray:
*Copy the element at index j to the temporary array and increment j and k.
*Copy the sorted elements from the temporary array back to the original array.
*Deallocate the temporary array.



 */

#include <iostream>
using namespace std;


template<typename T>
void mergeSort(T* arr,int size){
    if(size<=1){return;}
    int mid=size/2;
    mergeSort(arr,mid);
    mergeSort(arr+mid,size-mid);

    T* temp = new T[size];  // Allocate temporary array for merging

    int i = 0, j = mid, k = 0;
    while (i < mid && j < size) {
        if (arr[i] < arr[j]) {
            temp[k] = arr[i];
            i++;
        }
        else {
            temp[k] = arr[j];
            j++;
        }
        k++;
    }

    while (i < mid) {  // Copy remaining elements from left subarray
        temp[k] = arr[i];
        i++;
        k++;
    }

    while (j < size) {  // Copy remaining elements from right subarray
        temp[k] = arr[j];
        j++;
        k++;
    }

    for (int i = 0; i < size; i++) {  // Copy sorted elements back to original array
        arr[i] = temp[i];
    }

    delete[] temp;
}
int main() {
    int arr[] = {4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(int);

    mergeSort(arr, size);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
