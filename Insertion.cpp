#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }

    for (int i = 1; i < n; i++)
    {
        int corr=array[i];
        int j = i - 1;
        while (array[j]>corr & j>=0)
        {
            array[j+1] = array[j];
            j--;
        }
        array[j + 1] = corr;
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }
    
}