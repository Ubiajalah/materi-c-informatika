#include <iostream>   // Library untuk input-output (cout, cin)
using namespace std;  // Supaya bisa pakai cout, cin tanpa std::

void printArray(int arr[], int n, int step) {
    cout << "Step " << step << ": ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertionSort(int arr[], int n) {
    for(int i = 1; i < n; i++) {
        int key = arr[i];       // Elemen yang mau disisipkan di posisi yang benar
        int j = i - 1;          // Indeks elemen sebelumnya

        // Geser elemen yang lebih besar dari key ke kanan
        while(j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];  // Pindahkan arr[j] ke posisi kanan
            j--;                // Mundur satu langkah ke kiri
        }
        arr[j+1] = key;         // Tempatkan key pada posisi yang benar

        // Tampilkan array setelah setiap langkah
        printArray(arr, n, i);
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};         // Array awal
    int n = sizeof(arr)/sizeof(arr[0]);     // Hitung jumlah elemen array

    cout << "Array awal: ";
    for(int i = 0; i < n; i++) cout << arr[i] << " ";  // Cetak array awal
    cout << "\n\nProses insertion sort:\n";

    insertionSort(arr, n);                  // Panggil fungsi sorting

    cout << "\nArray setelah diurutkan: ";
    for(int i = 0; i < n; i++) cout << arr[i] << " ";  // Cetak array akhir
    return 0;
}
