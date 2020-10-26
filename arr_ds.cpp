#include <iostream>
using namespace std;

int main()
{
    int n;
    int a[1000];

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    bool checkpoint1 = true;
    bool checkpoint2 = true;

    for (int i = 1; i < n; i++)
    {
        if (a[i] <= a[i - 1])
        {
            checkpoint1 = false;
        }
        if (a[i] >= a[i - 1])
        {
            checkpoint2 = false;
        }
    }

    if (checkpoint1 || checkpoint2)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}