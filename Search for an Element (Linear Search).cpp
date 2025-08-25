#include <iostream>
using namespace std;

int main() {
    int num, find1;

    cout << "Enter How many number: ";
    cin >> num;

    int arr[num];
    for (int i = 0; i < num; i++) {
        cout << "Enter number " << i + 1 << " : ";
        cin >> arr[i];
    }

    cout << "Search: ";
    cin >> find1;

    int pos = -1; // default = not found
    for (int i = 0; i < num; i++) {
        if (arr[i] == find1) {
            pos = i;
            break;
        }
    }

    if (pos != -1)
        cout << "The position of " << find1 << " is " << pos + 1; // human-friendly (1-based)
    else
        cout << find1 << " not found in the array.";

    return 0;
}
