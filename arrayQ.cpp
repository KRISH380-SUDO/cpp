#include "bits/stdc++.h"
using namespace std;

int main(){
        int n,s;
        cin >> n >> s;
        
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int i = 0;
        int j = 0;
        int st = -1;
        int ed = -1;
        int sum = 0;

        while (j<n && sum+a[j]<=s)
        {
            sum += a[j];
            j++;
        }
        
        if (s == sum)
        {
            cout << i+1 << " " << j << endl;
            return 0;
        }

        while (j<n)
        {
            sum += a[j];
                while (sum > s)
                {
                    sum -= a[i];
                    i++;
                }
                if (s == sum)
                {
                    st = i+1;
                    ed = j+1;
                    break;
                }
                j++;
        }
        
        cout << st << " " << ed << endl;
}