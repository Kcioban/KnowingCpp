#include <iostream>
using namespace std;

// Trocar elementos
void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

// Partição
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

// Função recursiva - Quicksort 
void quicksort(int arr[], int low, int high) {
    if (low < high) {

        int p = partition(arr, low, high);

        quicksort(arr, low, p - 1);
        quicksort(arr, p + 1, high);
    }
}

// Ordenando o array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {

    // Entrada do Tamanho do nosso Array
    int size;
    cout << "Digite o tamanho do array: ";
    cin >> size;

    // Entrada dos componentes do Array
    int arr[size];
    cout << "Digite os elementos do array:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Plot do Array do usuario 
    cout << "Array original: ";
    printArray(arr, size);

    // Organização
    quicksort(arr, 0, size - 1);

    // Plot em ordem crescente.
    cout << "Array ordenado: ";
    printArray(arr, size);

    return 0;
}
