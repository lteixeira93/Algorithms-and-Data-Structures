#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void swap(int *x, int *y) {
    *x ^= *y;
    *y ^= *x;
    *x ^= *y;
}

void bubble_sort(int arr[], int length) {    
    bool swapping = 0, already_sorted = true;

    size_t i = 0;

    do {
        swapping = false;
        for (size_t j = 0; j < (length - 1); j++) {
            if(arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);   
                swapping = true;       
                already_sorted = false;      
                for (size_t i = 0; i < length; i++) {
                    printf("%d ", arr[i]);        
                }
                printf("\n"); 
            } 
        }
        i++;
        
    }while(swapping && i < length);
    
    if (already_sorted) {
        printf("Array already sorted\n");
    }
    
    for (size_t i = 0; i < length; i++) {
        printf("%d ", arr[i]);        
    }
    printf("\n"); 
}

int main(void) {
    /* code */
    int arr[] = { 6, 5, 3, 1, 8, 8, 2, -4, 15};   // Unsorted array
    //int arr[] = { -15, -1, 1, 1, 2, 3, 4, 5, 6 }; // Sorted array

    int arr_size = (sizeof(arr) / sizeof(int));

    bubble_sort(arr, arr_size);
    
    return 0;
}
