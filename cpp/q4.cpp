#include <iostream>
#include <vector>

using namespace std;

// Function to print a spiral pattern of numbers
void printSpiral(int n) {
    vector<vector<int>> matrix(n, vector<int>(n, 0));
    int value = 1, top = 0, bottom = n - 1, left = 0, right = n - 1;
    
    while (value <= n * n) {
        for (int i = left; i <= right; i++) matrix[top][i] = value++;
        top++;
        
        for (int i = top; i <= bottom; i++) matrix[i][right] = value++;
        right--;
        
        for (int i = right; i >= left; i--) matrix[bottom][i] = value++;
        bottom--;
        
        for (int i = bottom; i >= top; i--) matrix[i][left] = value++;
        left++;
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the size of the spiral: ";
    cin >> n;
    printSpiral(n);
    return 0;
}
