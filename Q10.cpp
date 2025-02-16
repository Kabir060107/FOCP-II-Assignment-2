#include <iostream>
using namespace std;

int main() {
    int rows1, cols1, rows2, cols2;
    cout << "Enter rows and columns for first matrix: ";
    cin >> rows1 >> cols1;
    cout << "Enter rows and columns for second matrix: ";
    cin >> rows2 >> cols2;
    
    if (cols1 != rows2) {
        cout << "Matrix multiplication not possible.";
        return 0;
    }
    
    int mat1[rows1][cols1], mat2[rows2][cols2], result[rows1][cols2] = {0};
    
    cout << "Enter elements of first matrix: ";
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            cin >> mat1[i][j];
        }
    }
    
    cout << "Enter elements of second matrix: ";
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            cin >> mat2[i][j];
        }
    }
    
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            for (int k = 0; k < cols1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    
    cout << "Resultant matrix after multiplication: " << endl;
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
