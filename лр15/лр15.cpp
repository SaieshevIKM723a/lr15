#include <iostream>
#include <vector>
#include <algorithm> 
#include <set> 

using namespace std;


vector<int> findDivisors(int n) {
    vector<int> divisors;
    set<int> usedDivisors; 

    for (int i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            if (!usedDivisors.count(i)) { 
                divisors.push_back(i);
                divisors.push_back(n / i);
                usedDivisors.insert(i);
                usedDivisors.insert(n / i);
            }
        }
    }

    return divisors;
}


void stdSort(vector<int>& arr) {
    std::sort(arr.begin(), arr.end()); 
}

void setIntersectionSort(vector<int>& arr) {
    set<int> sortedDivisors(arr.begin(), arr.end()); 
    vector<int> temp; 

    for (auto it = sortedDivisors.rbegin(); it != sortedDivisors.rend(); ++it) {
        temp.push_back(*it); 
    }

    arr = temp; 
}

int main() {
    int n;

    cout << "Enter an integer: ";
    cin >> n;

    vector<int> divisors = findDivisors(n);

    cout << "Divisors of a number " << n << ": ";
    for (int divisor : divisors) {
        cout << divisor << " ";
    }
    cout << endl;

    stdSort(divisors);

    cout << "Sorted dividers : ";
    for (int divisor : divisors) {
        cout << divisor << " ";
    }
    cout << endl;

    setIntersectionSort(divisors);

    cout << "Sorted intersections: ";
    for (int divisor : divisors) {
        cout << divisor << " ";
    }
    cout << endl;

    return 0;
}