#include<iostream>
#include<climits>
using namespace std;

int main(){

    int n;
    cin>>n;

    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<array[i]<<" ";
    // }
    int MaxNo= INT_MIN;     
    int MinNo= INT_MAX;

    for (int i = 0; i < n; i++)
    {
        MaxNo = max(array[i],MaxNo);
        MinNo = min(MinNo,array[i]);
        // if (array[i]>MaxNo)
        // {
        //     MaxNo = array[i];
        
        // }
        // if (array[i]<MinNo)
        // {
        //     MinNo = array[i];
        // }
        
    }

    cout<<"mini number:"<<MinNo<<" mini number:"<<MaxNo;      
}