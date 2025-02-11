#include <iostream>

using namespace std;
void reverseArray(int arr[], int n) {
    for (int i = 0; i < n / 2; ++i) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}
void findSecondLargestSmallest(int arr[], int n, int &secondLargest, int &secondSmallest) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    int smallest = arr[0], largest = arr[n - 1];
    secondSmallest = -1;
    secondLargest = -1;
    
    for (int i = 1; i < n; ++i) {
        if (arr[i] > smallest) {
            secondSmallest = arr[i];
            break;
        }
    }
    for (int i = n - 2; i >= 0; --i) {
        if (arr[i] < largest) {
            secondLargest = arr[i];
            break;
        }
    }
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    
    if (n < 2) {
        cout << "Array should have at least 2 elements." << endl;
        return 1;
    }
    
    int arr[100];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    reverseArray(arr, n);
    cout << "Reversed array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    int secondLargest, secondSmallest;
    findSecondLargestSmallest(arr, n, secondLargest, secondSmallest);
    
    if (secondSmallest != -1)
        cout << "Second smallest element: " << secondSmallest << endl;
    else
        cout << "No second smallest element found." << endl;
    
    if (secondLargest != -1)
        cout << "Second largest element: " << secondLargest << endl;
    else
        cout << "No second largest element found." << endl;
    
    return 0;
}
