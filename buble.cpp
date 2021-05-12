#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n;
    cin >> n;

    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int c = 1;

    while (c < n)
    {
        for (int i = 0; i < n - c; i++)
        {
            if (array[i] > array[i + 1])
            {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = array[i];
            }
        }
        c++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
}