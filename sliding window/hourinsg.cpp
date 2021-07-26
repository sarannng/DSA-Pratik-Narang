#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> ar = {1,3,2,1,4,1,3,2,1,1,2};
    int k = 8;

    for(int i=0; i<ar.size(); i++){
        int sum=0;
    int j=0;
        while(sum!=k && sum<=k){
            sum+=ar[j++];
        }
         
         if(sum==k){
             cout<<i<<" "<<j<<"\n";
         }
    }

}