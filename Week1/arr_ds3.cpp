#include <iostream>
using namespace std;

int main() {
    int n, m;
    int a[1000][1000];

    int sum = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            sum += a[i][j];
        }
    }

    cout << sum;
}
