#include <iostream>
#include <set>
using namespace std;

int findLongestConsecutiveSubsequence(int arr[], int n) {
    set<int> elements(arr, arr + n);
    int longest = 0;
    
    for (int num : elements) {
        if (elements.find(num - 1) == elements.end()) {
            int currentNum = num;
            int count = 1;
            
            while (elements.find(currentNum + 1) != elements.end()) {
                currentNum++;
                count++;
            }
            
            longest = max(longest, count);
        }
    }
    return longest;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Length of longest consecutive subsequence: " << findLongestConsecutiveSubsequence(arr, n) << endl;
    
    int rows, cols;
    cout << "Enter the number of rows and columns for the matrix: ";
    cin >> rows >> cols;
    
    int matrix[rows][cols], transpose[cols][rows];
    cout << "Enter the matrix elements: ";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
            transpose[j][i] = matrix[i][j];
        }
    }
    
    cout << "Transpose of the matrix: " << endl;
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
