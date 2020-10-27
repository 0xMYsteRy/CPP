#include <iostream>
using namespace std;

/*
Given 2 array, combine into one and in ascending order.
*/
int main() {
    int n, m;
    int a[100001], b[100001], c[100001];

    cin >> n;
    for (int i = 0; i < n; i++ ) {
        cin >> a[i];
    }

    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    int size = 0;
    int i =0; 
    int j =0;

    while ( i < n && j < m) {
        if (a[i] < b[j]) {
            c[size] = a[i];
            size += 1;
            i++;
        } else {
            c[size] = b[j];
            size++;
            j++;
        }
    }

    while (i < n) {
        c[size] = a[i];
        size++;
        i++;
    }

    while (j < m){
        c[size] = b[j];
        size++;
        j++;
    }

    for (int i =0; i < size; i++) {
        cout << c[i] << " ";
    }
}