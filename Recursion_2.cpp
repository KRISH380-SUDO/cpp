#include<iostream>
using namespace std;

int FristAliment(int arr[] , int n ,int i , int key ){
    if (i == n)
    {
        return -1;
    }
    if (arr[i] == key)
    {
        return i;
    }

    return FristAliment( arr , n , i+1 , key);
    
    
}

int LastAliment(int arr[] , int n ,int i , int key ){
    
    if (i == n)
    {
        return -1;
        
    }
        
    int PreLastAliment =  LastAliment( arr , n , i+1 , key);  
    if (PreLastAliment != -1)
    {
        return PreLastAliment;
    }
    if (arr[i] == key)
    {
        return i+1;
    }
        return -1;
     
}


void Reverse(string s){

    if (s.length() == 0 )
    { 
        return;
    }
    string ros = s.substr(1);
    Reverse(ros);
    cout << s[0];

}

void RelacePi(string s){
    if (s.length() == 0)
    {
        return;
    }
    
    if (s[0] == 'p' && s[1] == 'i')
    {
        cout << "3.14";
        RelacePi(s.substr(2));  
    }
    else
    {
        cout << s[0];
        RelacePi(s.substr(1));
    }
}

int main(){
    
    // int n;
    // cin >> n;
    
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    
    // cout << LastAliment( arr , n , 0 , 2 ) << endl;
    // Reverse("hsirk");
    RelacePi("pipppipiippipipppp");
    return 0;

}   