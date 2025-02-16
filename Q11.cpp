#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the square matrix: ";
    cin >> n;
    
    int matrix[n][n], primarySum = 0, secondarySum = 0;
    
    cout << "Enter the matrix elements: ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
            if (i == j) {
                primarySum += matrix[i][j];
            }
            if (i + j == n - 1) {
                secondarySum += matrix[i][j];
            }
        }
    }
    
    cout << "Sum of primary diagonal: " << primarySum << endl;
    cout << "Sum of secondary diagonal: " << secondarySum << endl;
    
    return 0;
}
