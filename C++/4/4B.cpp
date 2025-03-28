/*Write a C++ program to create a class which contains two dimensional integer array of size m*n 
Write a member function to display transpose of entered matrix.
(Use Dynamic Constructor for allocating memory and Destructor to free memory of an object).*/

#include <iostream>
using namespace std;

class Matrix {
    int **mat, rows, cols;

public:
    Matrix(int m, int n) {
        rows = m;
        cols = n;
        mat = new int*[rows];
        for (int i = 0; i < rows; i++) {
            mat[i] = new int[cols];
        }
    }

    void getData() {
        cout << "Enter matrix elements:\n";
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                cin >> mat[i][j];
    }

    void displayTranspose() {
        cout << "Transpose of matrix:\n";
        for (int j = 0; j < cols; j++) {
            for (int i = 0; i < rows; i++) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }

    ~Matrix() {
        for (int i = 0; i < rows; i++) {
            delete[] mat[i];
        }
        delete[] mat;
    }
};

int main() {
    int m, n;
    cout << "Enter number of rows and columns: ";
    cin >> m >> n;

    Matrix mat(m, n);
    mat.getData();
    mat.displayTranspose();

    return 0;
}
