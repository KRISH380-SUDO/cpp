#include <iostream>
using namespace std;

void PrimeSieve(int n)
{
    int prime[100] = {0};

    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == 0)
        {
            for (int j = i * i; j <= n; j += i)
            {
                prime[j] = 1;
            }
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == 0)
        {
            cout << i << endl;
        }
    }
}

void PrimeFactor(int n)
{
    int spf[100] = {0};
    for (int i = 2; i <= n; i++)
    {
        spf[i] = i;
    }

    for (int i = 2; i <= n; i++)
    {
        if (spf[i] == i)
        {
            for (int j = (i * i); j <= n; j += i)
            {
                if (spf[j] == j)
                {
                    spf[j] = i;
                }
            }
        }
    }
    while (n != 1)
    {
        cout << spf[n] << " ";
        n = n / spf[n];
    }
}

int Divisible(int n, int a, int b)
{

    int c1 = n / a;
    int c2 = n / b;
    int c3 = n / (a * b);

    return (c1 + c2 - c3);
}

int Gcd(int a, int b){
    while ( b != 0 )
    {
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a;
    
}

int main()
{
    int n, a;
    cin >> n >> a ;
    PrimeSieve(n);
    // PrimeFactor(n);
    // cout << Divisible(n, a, b);
    // cout << Gcd(n, a);
    return 0;
}