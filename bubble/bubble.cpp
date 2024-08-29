#include <bits/stdc++.h>
using namespace std;

void bubble(int a[], int n)
{
    bool swapped = false;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                swapped = true;
            }
        }
        if (!(swapped))
            break;
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
    for (int i = 0 ; i < x ; i++)
        cin >> a[i];

    int n = sizeof(a) / sizeof(a[0]);
    bubble(a, n);
    pr(a, n);

}
