#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n], sum = 0;
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    double average = (double)sum / n;
    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;
    
    return 0;
}
