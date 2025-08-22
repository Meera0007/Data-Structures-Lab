#include <iostream>
using namespace std;

void reverseArray(int arr[], int n) {
    int start = 0;
    int end = n - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void multiplyMatrices(int A[][10], int B[][10], int C[][10], int r1, int c1, int r2, int c2) {
    if (c1 != r2) {
        cout << "Matrix multiplication not possible!" << endl;
        return;
    }
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            C[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void transposeMatrix(int A[][10], int T[][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            T[j][i] = A[i][j];
        }
    }
}

void printMatrix(int M[][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << M[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    cout << "Original Array: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    reverseArray(arr, 5);

    cout << "Reversed Array: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int A[10][10] = { {1, 2}, {3, 4} };
    int B[10][10] = { {2, 0}, {1, 2} };
    int C[10][10];
    int r1 = 2, c1 = 2, r2 = 2, c2 = 2;

    cout << "\nMatrix A:" << endl;
    printMatrix(A, r1, c1);

    cout << "Matrix B:" << endl;
    printMatrix(B, r2, c2);

    multiplyMatrices(A, B, C, r1, c1, r2, c2);

    cout << "Result of A x B:" << endl;
    printMatrix(C, r1, c2);

    int T[10][10];
    transposeMatrix(A, T, r1, c1);

    cout << "\nTranspose of Matrix A:" << endl;
    printMatrix(T, c1, r1);

    return 0;
}
