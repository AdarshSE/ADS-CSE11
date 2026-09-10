#include <iostream>
using namespace std;
#define INF 999999

void merge(int arr[], int p, int q, int r) {
    int n1 = q - p + 1;
    int n2 = r - q;

    int L[n1+1], R[n2+1];

    for (int i = 0; i < n1; i++)
        L[i] = arr[p + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[q + 1 + j];

    L[n1] = INF;
    R[n2] = INF;

    int i = 0, j = 0, k;

    for (k = p; k <= r; k++) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
    }
}

void mergeSort(int arr[], int p, int r) {
    if (p < r) {
        int q = (p + r) / 2;

        mergeSort(arr, p, q);
        mergeSort(arr, q + 1, r);

        merge(arr, p, q, r);
    }
}

int main() {
    int arr[] = {21, 9, 32, 41, 16, 8};
    int n = 6;

    mergeSort(arr, 0, n - 1);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}