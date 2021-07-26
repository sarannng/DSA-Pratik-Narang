// Job: To return the indices of pair with sum as target

#include<iostream>
#include<vector>

using namespace std;

vector<int> pairs(vector<int> arr,  int target);

vector<int> pairs(vector<int> arr, int target ){
    
    vector<int> returnvec;

    for(int i=0; i< arr.size(); i++){
        int hunt = target - arr[i];

        for(int j=0; j< arr.size(); j++){
            if(arr[j] == hunt && i!=j){
                returnvec.push_back(i);
                returnvec.push_back(j);
                return returnvec;
            } 
          }
    }

    return returnvec;
}


int main(){
    vector<int> arr = {10, 5, 2, 3, -6, 9, 11};
    vector<int> result = pairs(arr, 4);
    for(int x  : result){
        cout<<x<<" ";
    }
}

































// #include<iostream>
// #include<vector>

// using namespace std;

// int twosum(int arr[], int targer);

// int twosum(int arr[], int target){
//      // brute force 
//     // 10, 5, 2, 3, -6, 9, 11

//     for(int i=0; i<arr.size(); i++){

//     }

// }


// int main(){
//  int arr[7] = {10, 5, 2, 3, -6, 9, 11};

//     int size = 7, 
// }
