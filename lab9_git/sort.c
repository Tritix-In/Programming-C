#include <stdio.h>

void bubble_sort(int arr[], int n) {
    // изменене файла
    // еще одно изменение файла
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(void) {
    int a[2] = {4,2};
    for (int i = 0; i < 2; ++i) {
        printf("%d\n",a[i]);
    }

    bubble_sort(a, 2);

    for (int i = 0; i < 2; ++i) {
        printf("%d\n",a[i]);
    }

    return 0;
}