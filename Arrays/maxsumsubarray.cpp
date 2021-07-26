#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int maxsumsubarray(vector<int> arr);

int maxsumsubarray(vector<int> arr){
    
    int maxt = 0;

    for(int i=0; i< arr.size(); i++){
        int loctot = 0;

        for(int j=i; j< arr.size(); j++){
            loctot += arr[j];
        maxt = max(maxt, loctot);
            
        }
            cout<<maxt<<"\n";
    }
 return maxt; 
}



int main(){
    vector<int> arr = {-1, 2, 3, 4, -2, 6, -8, 3};
    cout<<maxsumsubarray(arr);

}