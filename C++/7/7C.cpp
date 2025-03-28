/*Create a class Matrix and Write a C++ program to perform following functions:
a. To accept a Matrix
b. To display a Matrix
c. Overload unary minus ‘–‘ operator to calculate transpose of a Matrix
d. Overload binary multiplication '*’ operator to calculate multiplication of two matrices*/

#include <iostream>
using namespace std;

class Matrix {
    int r, c, mat[10][10];

public:
    void accept() {
        cout << "Enter rows and cols: ";
        cin >> r >> c;
        cout << "Enter elements:\n";
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                cin >> mat[i][j];
    }

    void display() const {
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++)
                cout << mat[i][j] << " ";
            cout << endl;
        }
    }

    Matrix operator-() {   // Transpose
        Matrix t;
        t.r = c; t.c = r;
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                t.mat[j][i] = mat[i][j];
        return t;
    }

    Matrix operator*(const Matrix& m) {   // Multiplication
        Matrix res;
        if (c != m.r) {
            cout << "Invalid dimensions!\n";
            return res;
        }
        res.r = r; res.c = m.c;
        for (int i = 0; i < r; i++)
            for (int j = 0; j < m.c; j++) {
                res.mat[i][j] = 0;
                for (int k = 0; k < c; k++)
                    res.mat[i][j] += mat[i][k] * m.mat[k][j];
            }
        return res;
    }
};

int main() {
    Matrix m1, m2, t, prod;

    cout << "Matrix 1:\n"; m1.accept();
    cout << "Matrix 2:\n"; m2.accept();

    cout << "\nMatrix 1:\n"; m1.display();
    cout << "\nTranspose of Matrix 1:\n"; t = -m1; t.display();

    cout << "\nProduct of Matrix 1 and Matrix 2:\n";
    prod = m1 * m2; 
    prod.display();

    return 0;
}
