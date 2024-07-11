#include <iostream>
#include <vector>

using namespace std;

void displayArray(const vector<int>& arr) {
    cout << "Current Array: ";
    for (int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr;
    int choice, value, index;

    cout << "Enter the number of elements to initialize the array: ";
    int n;
    cin >> n;

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i) {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    displayArray(arr); // Display the initial array

    while (true) {
        cout << "\nChoose an operation:\n";
        cout << "1. Insert\n";
        cout << "2. Update\n";
        cout << "3. Delete\n";
        cout << "4. Read\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: // Insert
                cout << "Enter the value to insert: ";
                cin >> value;
                cout << "Enter the index to insert at: ";
                cin >> index;
                if (index >= 0 && index <= arr.size()) {
                    arr.insert(arr.begin() + index, value);
                    cout << "Value inserted.\n";
                } else {
                    cout << "Invalid index.\n";
                }
                displayArray(arr);
                break;

            case 2: // Update
                cout << "Enter the index to update: ";
                cin >> index;
                if (index >= 0 && index < arr.size()) {
                    cout << "Enter the new value: ";
                    cin >> value;
                    arr[index] = value;
                    cout << "Value updated.\n";
                } else {
                    cout << "Invalid index.\n";
                }
                displayArray(arr);
                break;

            case 3: // Delete
                cout << "Enter the index to delete: ";
                cin >> index;
                if (index >= 0 && index < arr.size()) {
                    arr.erase(arr.begin() + index);
                    cout << "Value deleted.\n";
                } else {
                    cout << "Invalid index.\n";
                }
                displayArray(arr);
                break;

            case 4: // Read
                displayArray(arr);
                break;

            case 5: // Exit
                cout << "Exiting...\n";
                return 0;

            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    }

    return 0;
}
