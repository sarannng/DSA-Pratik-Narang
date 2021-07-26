#include<iostream>
#include<vector>
using namespace std;
pair<int, int>  sol(vector<int> a, vector<int> b);

pair<int, int>  sol(vector<int> a, vector<int> b){
    pair<int, int> p;
    int mina = INT32_MAX;
  
    for(int i=0; i<a.size(); i++){
         //   p.first = max(p.first, a[i]);
        for(int j=0; j< b.size(); j++){
            mina  = min(abs(a[i]-b[j]), mina);    
                
                if(abs(a[i]-b[j]) < mina){
                    p.first = a[i];
                    p.second  = b[j];
                }
        }
    }    

 return p;
}
 
int main(){
    
    vector<int> a = {23, 5, 10, 17, 30};
    vector<int> b = {26, 134, 135, 14, 19};

    pair<int, int> pa = sol(a, b);
    cout<<pa.first<<" "<<pa.second;      
}