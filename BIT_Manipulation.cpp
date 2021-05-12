#include <iostream>
using namespace std;

int GetBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}
/*  */
int SetBit(int n, int pos)
{
    return (n | (1 << pos));
}

int ClearBit(int n, int pos)
{
    int mas = ~(1 << pos);
    return (n & mas);
}

int UpdateBit(int n, int pos, int value)
{
    int mass = ~(1 << pos);
    n = n & mass;
    return (n | (value << pos));
}

bool PowerOf2(int n)
{
    return (n && !(n & n - 1));
}

int Count1(int n)
{
    int ans = 0;
    while (n != 0)
    {
        n = n & n - 1;
        ans++;
    }
    return ans;
}

void subsets(int arr[], int n)
{
    for (int i = 0; i < (1 << n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                cout << arr[j] << ' ';
            }
        }
        cout << endl;
    }
}

int Unique(int arr[], int n)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum ^ arr[i];
    }
    return xorsum;
}

void For_2_Unique(int arr[], int n)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum ^ arr[i];
    }
    int Newxorsum = xorsum;
    int setbit = 0;
    int pos = 0;
    while (setbit != 1)
    {
        setbit = xorsum & 1;
        pos++;
        xorsum = xorsum >> 1;
    }
    int xorsum_2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (GetBit(arr[i], pos - 1))
        {
            xorsum_2 = xorsum_2 ^ arr[i];
        }
    }

    cout << xorsum_2 << endl;

    cout <<(Newxorsum ^ xorsum_2)<< endl;


}

int main()
{
    cout << GetBit(5,2) << endl;
    cout << SetBit(5,1) << endl;
    cout << ClearBit(5,2) << endl;
    cout << UpdateBit(5,1,1) << endl;
    cout << PowerOf2(14) << endl;
    cout << Count1(3) <<endl;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    subsets(arr,n);
    For_2_Unique(arr, n);

    return 0;
}