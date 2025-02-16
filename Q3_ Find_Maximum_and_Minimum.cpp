#include <iostream>
#include <limits.h>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int maxElement = INT_MIN, minElement = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
        if (arr[i] < minElement) {
            minElement = arr[i];
        }
    }
    
    cout << "Maximum element: " << maxElement << endl;
    cout << "Minimum element: " << minElement << endl;
    
    return 0;
}
