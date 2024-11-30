#include <bits/stdc++.h>
using namespace std;
int partition(vector<int>& v, int low, int high) {
    int pivot = v[high]; 
    int i = low - 1;       

    for (int j = low; j < high; ++j) {
        if (v[j] < pivot) {
            ++i;
            swap(v[i], v[j]);
        }
    }
    swap(v[i + 1], v[high]);
    return i + 1; 
}
void quickSort(vector<int>& v, int low, int high) {
    if (low < high) {
        int pi = partition(v, low, high);

        quickSort(v, low, pi - 1);
        quickSort(v, pi + 1, high);
    }
}
int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter the elements:\n";
    for (auto& i :v) {
        cin >> i;
    }

    quickSort(v, 0, n - 1);

    cout << "Sorted array:\n";
    for (const auto& elem : v) {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}
