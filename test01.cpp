#include <iostream>
using namespace std;
int main()
{
    // Ã°ÅÝÅÅÐò
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    // Ñ¡ÔñÅÅÐò
    int m;
    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < m - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < m; j++)
        {
            if (b[j] < b[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            swap(b[i], b[min]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        cout << b[i] << " ";
    }

    // ²åÈëÅÅÐò
    int k;
    cin >> k;
    int c[k];
    for (int i = 0; i < k; i++)
    {
        cin >> c[i];
    }
    for (int i = 1; i < k; i++)
    {
        int key = c[i];
        int j = i - 1;
        while (j >= 0 && c[j] > key)
        {
            c[j + 1] = c[j];
            j--;
        }
        c[j + 1] = key;
    }
    for (int i = 0; i < k; i++)
    {
        cout << c[i] << " ";
    }

    return 0;
}