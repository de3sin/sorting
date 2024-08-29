#include <bits/stdc++.h>
using namespace std;

void selection(int a[], int n)
{
    for (int i = 0; i < n - 1; i++) {
        int min_indx = i;
        for (int j = i; j < n; j++) {
            if (a[j] < a[min_indx])
                min_indx = j;
        }
        if (min_indx != i)
            swap (a[min_indx], a[i]);

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

    selection(a, n);
    pr(a, n);

    return 0;
}