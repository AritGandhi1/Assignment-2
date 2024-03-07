#include <stdio.h>

void reverseArray(int arr[], int start, int end);

int main() {
    int n;
    scanf("%d", &n);
    int arr[n]; // initialize the array
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    reverseArray(arr, 0, n-1); // call recursive function to reverse the array
    
    printf("\nReversed array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}

void reverseArray(int arr[], int start, int end) {
    if (start >= end) { // base case
        return;
    }
    
    int temp = arr[start]; // swap elements
    arr[start] = arr[end];
    arr[end] = temp;
    
    reverseArray(arr, start + 1, end - 1); // call function recursively with updated indices
}