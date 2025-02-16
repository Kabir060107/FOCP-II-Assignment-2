#include <iostream>
using namespace std;

int main() {
    int rows, cols, target;
    cout << "Enter the number of rows and columns: ";
    cin >> rows >> cols;
    
    int matrix[rows][cols];
    cout << "Enter the matrix elements in sorted order: ";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }
    
    cout << "Enter the target value to search: ";
    cin >> target;
    
    int i = 0, j = cols - 1;
    bool found = false;
    while (i < rows && j >= 0) {
        if (matrix[i][j] == target) {
            cout << "Target found at position: (" << i << ", " << j << ")" << endl;
            found = true;
            break;
        } else if (matrix[i][j] > target) {
            j--;
        } else {
            i++;
        }
    }
    
    if (!found) {
        cout << "Target not found in the matrix." << endl;
    }
    
    return 0;
}
