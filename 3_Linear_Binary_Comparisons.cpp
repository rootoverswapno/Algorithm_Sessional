#include <bits/stdc++.h>
using namespace std;
int main()
{
    array<int, 6> arr = {2, 4, 6, 7, 8, 9}; // Use std::array for safer and more modern handling
    int size = arr.size();
    int choice, key;

    cout << "Menu:"<<endl;
    cout << "1. Linear Search"<<endl;
    cout << "2. Binary Search"<<endl;
    cout << "3. Display Time Complexity"<<endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
    {
        cout << "Enter the key to search: ";
        cin >> key;
        bool found = false;

        for (int i = 0; i < size; ++i) 
        {
            if (key == arr[i])
            {
                cout << "Element found at index: " << i << endl;
                found = true;
                break;
            }
        }

        if (!found)
            cout << "Element not found" << endl;
    }
    break;

    case 2:
    {
        
        cout << "Enter the key to search: ";
        cin >> key;
        int l = 0, h = size - 1;
        bool found = false;

        while (l <= h)
        {
            int mid = l + (h - l) / 2;

            if (key == arr[mid])
            {
                cout << "Element found at index: " << mid << endl;
                found = true;
                break;
            }

            if (key > arr[mid])
                l = mid + 1; 
            else
                h = mid - 1; 
        }

        if (!found)
            cout << "Element not found" << endl;
    }
    break;

    case 3:
    {
        
        cout << "Time Complexity Analysis:"<<endl<<endl;

        
        cout << "1. Linear Search:"<<endl;
        cout << "   Best Case: O(1)"<<endl;;
        cout << "   Worst Case: O(n) "<<endl<<endl;

        cout << "2. Binary Search:"<<endl;
        cout << "   Best Case: O(1) "<<endl;
        cout << "   Worst Case: O(log n) "<<endl;
        cout << "   For this array of size " << size << ", Worst Case = log2(" << size
             << ") = " << log2(size) << " iterations."<<endl;
    }
    break;
    default:
        cout << "Invalid choice! Please enter 1, 2, or 3." << endl;
    }

    return 0;
}
