#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {6,1,4,1,1};
    int l=0, right = 13;
    int i=0;
    
    while(l!=right-arr[i])
    {
        l += arr[i];
        right -= arr[i];
        i++;    
    }

cout<<i;
 
}