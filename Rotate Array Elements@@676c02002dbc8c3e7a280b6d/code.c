#include <stdio.h>

void rotateArray(int arr[], int size, int d) {
    int temp[d];
    
    for (int i = 0; i < d; i++) {
        temp[i] = arr[i];
    }
    
    for (int i = 0; i < size - d; i++) {
        arr[i] = arr[i + d];
    }
    
    for (int i = 0; i < d; i++) {
        arr[size - d + i] = temp[i];
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[6];
    int size = 6;
    int d;

    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    scanf("%d", &d);

    d = d % size;

    printArray(arr, size);

    rotateArray(arr, size, d);

    printArray(arr, size);

    return 0;
}
