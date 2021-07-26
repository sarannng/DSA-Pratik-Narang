 #include<iostream>
 using namespace std;
 int dynamicprog(int n, int k);
 
int dynamicprog(int n, int k){
    if(n==0)
    return 1;

    if(n<0)
    return 0;

    
int ans =0;
    for(int i=1; i<=k; i++){
        ans+= dynamicprog(n-i, k);
    }
    return ans;
}

 int main(){
 cout<<dynamicprog(4,3);     
 }