#include<iostream>
using namespace std;


int CoutPath(int s ,int e){
    if (s == e)
    {
        return 1;
    }
    if (s > e)
    {
        return 0;
    }
    int cou = 0;
    for (int i = 1; i < 6; i++)
    {
        cou += CoutPath(s+i,e);
    }
    return cou;   
}

int main(){
    cout << CoutPath(0,35) << endl;
}

