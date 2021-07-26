#include<iostream>
#include<vector>
using namespace std;

int main(){
   vector<int> arr={1,2,3,1,2};
     int check = 0;
     int j = 0;
    int tot = 0;
    for(int i=0; i<arr.size(); i++){
        tot+= arr[i];
    }

    int left = 0; 
    int right = tot - arr[0];


    while(left == right || j< arr.size()){
        left+=arr[j];
        right= tot-left;

        cout<<left<<" "<<right<<"\n";

        j++;
    }
}