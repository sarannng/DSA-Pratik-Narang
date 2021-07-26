#include<iostream>
using namespace std;

void gB(string output,int n, int open, int close, int i){
//base case
if(i == 2*n){
cout<<output<<"\n";
return;
}

// opening 
if(open< n){
    gB(output + '(',n,  open+1, close, i+1);
}
// closing
 if(close < open){
     gB(output + ')', n, open, close +1 , i+1);
 }
}

int main(){
    string output;
    int n;
    cin>>n;

    gB(output,n,0,0,0);
}