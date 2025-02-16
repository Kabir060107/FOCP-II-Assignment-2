#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter the number of rows and columns: ";
    cin >> rows >> cols;
    
    int matrix[rows][cols];
    cout << "Enter the matrix elements: ";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }
    
    bool found = false;
    for (int i = 0; i < rows; i++) {
        int minRowValue = matrix[i][0], colIndex = 0;
        for (int j = 1; j < cols; j++) {
            if (matrix[i][j] < minRowValue) {
                minRowValue = matrix[i][j];
                colIndex = j;
            }
        }
        
        bool isSaddlePoint = true;
        for (int k = 0; k < rows; k++) {
            if (matrix[k][colIndex] > minRowValue) {
                isSaddlePoint = false;
                break;
            }
        }
        
        if (isSaddlePoint) {
            cout << "Saddle point found at (" << i << ", " << colIndex << ") with value " << minRowValue << endl;
            found = true;
        }
    }
    
    if (!found) {
        cout << "No saddle point found in the matrix." << endl;
    }
    
    return 0;
}
