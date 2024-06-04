#include <iostream>

using namespace std;

void sortDescending(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] < arr[j]) {
            
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int n;

    cout << "Enter an integer n: ";
    cin >> n;

    int divisors[n];
    int divisor_count = 0;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            divisors[divisor_count] = i;
            divisor_count++;
        }
    }

    cout << "Array of divisors: ";
    for (int i = 0; i < divisor_count; i++) {
        cout << divisors[i] << " ";
    }
    cout << endl;

    sortDescending(divisors, divisor_count);

    cout << "Sorted array in descending order: ";
    for (int i = 0; i < divisor_count; i++) {
        cout << divisors[i] << " ";
    }
    cout << endl;

    return 0;
}
