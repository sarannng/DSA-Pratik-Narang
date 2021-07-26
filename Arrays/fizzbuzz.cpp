#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<string> fizzbuzz(int n);

int main(){

vector<string> test = fizzbuzz(20);

for(string x : test){
    cout<< x<<"\n"; 
}

}
 
//Complete this method, don't write main
vector<string> fizzbuzz(int n){

vector<string> toreturn; 

 for(int i=1; i<n; i++){
     if(i%3 == 0 && i%5 == 0){
        toreturn.push_back("FizzBuzz");
     }

    else if( i % 3 == 0 ){
        toreturn.push_back("Fizz");
    }

    else if( i % 5 == 0 ){
        toreturn.push_back("Buzz");
    }

    else{

        string ntos = to_string(i);

        toreturn.push_back(ntos);
    }

 }   
   
return toreturn;
    
}