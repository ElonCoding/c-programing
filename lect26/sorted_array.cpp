#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 6, 0, 8};
    int n = 4;
    
    cout << "Before: [";
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i < n - 1) cout << ",";
    }
    cout << "]" << endl;

    int pos = 0;  
    
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            swap(arr[pos], arr[i]);
            pos++;
        }
    }
    
    cout << "After:  [";
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i < n - 1) cout << ",";
    }
    cout << "]" << endl;
    
    return 0;
}