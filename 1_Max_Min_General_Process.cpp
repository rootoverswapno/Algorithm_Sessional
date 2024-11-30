#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter " << n << " elements: ";
    for (auto& elem :v) {
        cin >> elem;
    }
    cout << "Array elements:" << endl;
    for (auto& elem :v) {
        cout << elem << endl;
    }
   int max=INT_MIN;
   int min=INT_MAX;
   for(auto &i:v)
   {
         if(i>max) max=i;  
         if(i<min) min=i;   
   }  
    cout << "Maximum: " << max << endl;
    cout << "Minimum: " << min << endl;

    return 0;
}
