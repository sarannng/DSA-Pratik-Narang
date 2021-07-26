#include<iostream>
#include<vector>
using namespace std;
int fact(int n);
vector<int> dp(10,-1);
int fact(int n){
    if(n==0)
    return 1;

    if(dp[n]!=-1){
    cout<<"memoized";
    return dp[n];
    }

    return dp[n]= n*fact(n-1);     
}
 
int main(){
  cout<<fact(5);
}