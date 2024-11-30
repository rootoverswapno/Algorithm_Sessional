#include <bits/stdc++.h>
using namespace std;
int main() {
    int choice, target, count = 0;
    vector<int> v;

    cout << "Choose a case to simulate:"<<endl;
    cout << "1. Average case (target is in the array)"<<endl;
    cout << "2. Worst case (target is not in the array)"<<endl;
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    cout << "Enter the size of the array: ";
    int n;
    cin >> n;

    cout << "Enter a sorted array: ";
    v.resize(n); 
    for (auto& num : v) {
        cin >> num;
    }

    cout << "Enter the target element: ";
    cin >> target;

    if (choice == 1 && find(v.begin(), v.end(), target) == v.end()) {
        cerr << "Error: Target must exist in the array for the average case."<<endl;
        return 1; 
    }

    int low = 0, high = n - 1;
    int mid;
    bool found = false;

    while (low <= high) {
        ++count;
        mid = low + (high - low) / 2; 
        if (v[mid] == target) {
            found = true;
            break;
        }
        (v[mid] < target) ? low = mid + 1 : high = mid - 1;
    }

    if (found) {
        cout << "Target found at index " << mid <<endl;
    } else {
        cout << "Target not found in the array."<<endl;
    }

    cout << "Total loop iterations: " << count << endl;
    return 0;
}
