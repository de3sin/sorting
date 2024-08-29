#include <bits/stdc++.h>
using namespace std;

void insertion(int a[], int n)
{
    for (int i = 0; i < n; i++) {
        int key = a[i];
        int j = i - 1;

        while (j >= 0 & a[j] > key) {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }
}

void pr(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << ' ';
}

int main() {

    int x;
    cin >> x;
    int a[x];
    for (int i = 0; i < x; i++)
        cin >> a[i];

    int n = sizeof(a) / sizeof(a[0]);
    insertion(a, n);
    pr(a, n);

    return 0;
}