#include <iostream>
using namespace std;
//快速排序
void quickSort(int a[], int l, int r) {
    if (l >= r) return;
    int i = l, j = r, x = a[l];
    while (i < j) {
        while (i < j && a[j] >= x) j--;
        if (i < j) a[i++] = a[j];
        while (i < j && a[i] < x) i++;
        if (i < j) a[j--] = a[i];
    }
    a[i] = x;
    quickSort(a, l, i - 1);
    quickSort(a, i + 1, r);
}

int main() {
    //快速排序
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    quickSort(a, 0, n - 1);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;



    return 0;
}