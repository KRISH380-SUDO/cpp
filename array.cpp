`   #include<iostream>
#include<climits>
using namespace std;

int LinearSearch(int array[], int n , int key ){
    for (int i = 0; i < n; i++)
    {
        if (array[i] == key)
        {
            return i;
            
        }
    
    }
     return -1;    
}


int BainarySearch(int array[], int n, int key){
    
    int s=0;
    int e=n;
    while (s<=e)
    {
        int mid = (e+s)/2;
        if (mid==key)
            {
                return mid;
            }
         else if (mid>key)
            {
                e = mid - 1;
            } 

        else
            {
                s = mid + 1;
            }
    }
    return -1;
    
}



int main(){
    int n;
    cin>>n;

    int array[n];
    
    for (int i = 0; i < n; i++)
    {
        
        cin>>array[i]; 
    }

    int key;
    cin>> key;

    cout<<BainarySearch(array,n,key);

}
int main(){
    int n;
    cin >> n;
    
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    int curr = 1;
    for (int i = 1; i < n-1; i++)
    {
        if (a[i-1] < a[i] && a[i] > a[i+1]  )
        {
            curr++;
        }
        
    }
    
}