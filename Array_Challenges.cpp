#include "bits/stdc++.h"
using namespace std;
// int main()
//     {
//         int n;
//         cin >> n;

//         int a[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }

//         const int N = 1e6+2;
//         int idx[N];
//         for (int i = 0; i < N; i++)
//         {
//             idx[i] = -1;
//         }
//         int minidx = INT_MAX;
//         for (int i = 0; i < n; i++)
//         {
//             if (idx[a[i]] = !-1)
//             {
//                 minidx = min(minidx, idx[a[i]]);
//             }
//             else
//             {
//                 idx[a[i]] = i;
//             }
//         }

//         if (minidx == INT_MAX)
//         {
//             cout << "-1" << endl;
//         }
//         else
//         {
//             cout << minidx << endl;
//         }
//     }

// int main(){
//     int mx=-1999999;
//     int n;
//     cin>>n;
//     int array[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin>>array[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         mx = max(array[i],mx);
//     }

//     cout<<mx<<endl;

// }

// int main(){
//     int n;
//     cin>>n;

//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>a[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         int curr=0;
//         for (int j = i; j < n; j++)
//         {
//             curr += a[j];
//             cout<<curr<<endl;
//         }

//     }

// }

int main(){
    int n;
    cin>>n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    int curr = 2;
    int pd = a[1] - a[0];
    int j= 2;
    int ans =2;

    while (j<n)
    {
       if (pd == a[j] - a[j-1])
       {
           curr++;
       }
       else
       {
           pd == a[j] - a[j-1];
           curr = 2;
       }
       ans = max(ans,curr);
    }

}
