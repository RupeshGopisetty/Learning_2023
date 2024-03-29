#include <stdio.h>
int countSetBits(int num) {
    int count = 0;
    while (num) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}
int totalSetBits(int arr[], int length) {
    int totalBits = 0;
    for (int i = 0; i < length; i++) {
        totalBits += countSetBits(arr[i]);
    }
    return totalBits;
}
int main() {
    int arr[] = {0x1, 0xF4, 0x10001};
    int length = sizeof(arr) / sizeof(arr[0]);

    int totalBits = totalSetBits(arr, length);
    printf("The total number of set bits in the array is: %d\n", totalBits);

    return 0;
}


