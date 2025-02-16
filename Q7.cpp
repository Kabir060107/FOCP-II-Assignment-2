#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    set<int> uniqueElements;
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < n; i++) {
        if (uniqueElements.find(arr[i]) == uniqueElements.end()) {
            cout << arr[i] << " ";
            uniqueElements.insert(arr[i]);
        }
    }
    cout << endl;
    
    return 0;
}
