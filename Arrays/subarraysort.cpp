#include<iostream>
#include<vector>

using namespace std;
vector<int> solution(vector<int> arr);

vector<int> solution(vector<int> arr){
    int first = 0;
    int last = arr.size()-1;
    vector<int> ret;
    for(int i=0; i<arr.size()-1; i++){
        if(arr[i+1] >= arr[i]){
            first++;
        }
        else{
            ret.push_back(first);
            break;
        }
    }

for(int i=arr.size(); i>0; i--){
        if(arr[i] <= arr[i-1]){
            last--;
        }
        else{
            ret.push_back(last);
            break;
        }
    }

 return ret;
}

int main(){
    vector<int> arr = {1,2,3,4,5,8,6,7,9,10,11};
    vector<int> ret =  solution(arr);
    for(int x : ret)
    cout<<x;
}