#include <iostream>
using namespace std;

int main() {
    int num, k;
    cout << "Enter how many numbers: ";
    cin >> num;

    int arr[num];
    for (int i = 0; i < num; i++) {
        cout << "Enter number " << i+1 << ": ";
        cin >> arr[i];
    }

    cout << "Enter k (how many rotations): ";
    cin >> k;


    k = k % num;

    cout << "Rotated Array: ";
    for (int i = 0; i < num; i++) {
        int newIndex = (i + k) % num;
        cout << arr[newIndex] << " ";
    }

    return 0;
}
