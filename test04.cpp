#include <iostream>
using namespace std;
// ¿ìËÙÅÅÐò
void quickSort(int a[], int left, int right)
{
    if (left >= right)
    {
        return;
    }
    int i = left;
    int j = right;
    int key = a[left];
    while (i < j)
    {
        while (i < j && a[j] >= key)
        {
            j--;
        }
        a[i] = a[j];
        while (i < j && a[i] <= key)
        {
            i++;
        }
        a[j] = a[i];
    }
    a[i] = key;
    quickSort(a, left, i - 1);
    quickSort(a, i + 1, right);
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    quickSort(a, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << "hello world" << endl;
    return 0;
}