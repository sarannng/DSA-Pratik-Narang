#include<iostream>
#include<vector>
using namespace std;
vector<int> productArray(vector<int> arr);

vector<int> productArray(vector<int> arr){
    
    //Create an output Array
    int n = arr.size();
    vector<int> output(n,1);
    int it=0;     
    for(int i=0; i<n; i++){
        int prod =0;
        
        for(int j=0; j<n; j++){
         if(i!=j){   prod  += arr[j];}
        }

        output[it++] = prod;
    }

    
    
    
    return output;
}
int main(){
    vector<int> arr = {1,2,3,4,5};
vector<int> te = productArray(arr);
for(int t : te){
    cout<<t<<"\n";
}
}