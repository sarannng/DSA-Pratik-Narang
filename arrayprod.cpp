#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int test(string s);

int test(string s){
    
 int count=0;
    unordered_map<char, int> mp;
    for(int i=0; i< s.size(); i++){
        if(mp.find(s[i]) == mp.end()){
          mp.insert({s[i], 0});
        }
        
        else{
            mp.erase(s[i]);
        }
    }
   return mp.size();}


int main(){
    cout<<test("hackthegame");
 
}