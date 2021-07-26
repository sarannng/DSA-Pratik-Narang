#include<iostream>
#include<vector>
using namespace std;
void mergeSort(vector<int> &arr, int low, int high);
void merge(vector<int> &arr, int low, int high, int mid);

void merge(vector<int> &arr, int low, int high, int mid){
    vector<int> temp;
    int i= low;
    int j= high;    
    
    while (i<=mid  && j<=high )
    {
        if(arr[i]>arr[j] ){
            temp.push_back(arr[i++]);
        }

        if(arr[j]>arr[i] ){
            temp.push_back(arr[j++]);
        }

        // if(arr[i] == arr[j]){
        //     temp.push_back(arr[i++]);
        //     temp.push_back(arr[j++]);
            
        // }

    }

    while(i< mid ){
        temp.push_back(arr[i++]);        
    }
    
        while(j< high  ){
        temp.push_back(arr[j++]);        
    }

    
   int l=0;
    for(int x : temp){
         arr[l++] = x;
    }
}

void mergeSort(vector<int> &arr, int low, int high){
    
    int mid = (low + high)/2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    
    merge(arr,low, high, mid);
     
}

int main(){
    vector<int> arr = {10,5,2,0,7,6,4};
    int low = 0;
    int high = arr.size() - 1;
    mergeSort(arr, low, high);
      

    for(int i=0; i<arr.size(); i++){
        cout<<arr[i];
    }

}