#include <bits/stdc++.h>
using namespace std;

int createArray(int arr[], int n) {
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    return n;
}

void display(int arr[], int n) {
    if (n == 0) {
        cout << "Array is empty.\n";
        return;
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int insertValue(int val, int pos, int arr[], int n) {
    if (n >= 10) {
        cout << "Array is full. Cannot insert.\n";
        return n;
    }
    if (pos < 1 || pos > n + 1) {
        cout << "Invalid position.\n";
        return n;
    }
    for (int i = n - 1; i >= pos - 1; i--) {
        arr[i + 1] = arr[i];
    }
    arr[pos - 1] = val;
    n++;
    cout << "Value inserted successfully.\n";
    return n;
}

int deletePos(int pos, int arr[], int n) {
    if (n == 0) {
        cout << "Array is empty. Nothing to delete.\n";
        return n;
    }
    if (pos < 1 || pos > n) {
        cout << "Invalid position.\n";
        return n;
    }
    for (int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
    cout << "Value deleted successfully.\n";
    return n;
}

void linearSearch(int searchVal, int arr[], int n) {
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (searchVal == arr[i]) {
            found = 1;
            cout << "Element found at position " << (i + 1) << "\n";
            break;
        }
    }
    if (found == 0) {
        cout << "Element not found\n";
    }
}

int main() {
    int arr[10];
    int n = 0;
    int checkValue;
    bool exitLoop = false;

    while (!exitLoop) {
        cout << "Enter Number \n"
             << "1- CREATE\n"
             << "2- DISPLAY\n"
             << "3- INSERT\n"
             << "4- DELETE\n"
             << "5- LINEAR SEARCH\n"
             << "6- EXIT PROGRAM\n";
        cin >> checkValue;

        switch (checkValue) {
            case 1:
                n = createArray(arr, n);
                break;
            case 2:
                display(arr, n);
                break;
            case 3: {
                int val, pos;
                cout << "Enter value to insert: ";
                cin >> val;
                cout << "Enter position to insert at: ";
                cin >> pos;
                n = insertValue(val, pos, arr, n);
                display(arr, n);
                break;
            }
            case 4: {
                int pos;
                cout << "Enter position to delete: ";
                cin >> pos;
                n = deletePos(pos, arr, n);
                display(arr, n);
                break;
            }
            case 5: {
                int searchVal;
                cout << "Enter value to search: ";
                cin >> searchVal;
                linearSearch(searchVal, arr, n);
                break;
            }
            case 6:
                cout << "Exiting the Program\n";
                exitLoop = true;
                break;
            default:
                cout << "Invalid option\n";
        }
    }
    return 0;
}
