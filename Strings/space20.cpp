#include<iostream>
#include<string>
using namespace std;
void stringit(string str);

void stringit(string str){

}

int main(){
    string str = "hello how are you";
    // stringit(str);
    // str.insert(1,str);
    string tobe = "%20";
    for(int i=0; i<str.size(); i++){
        if(str[i] == ' '){
            //cout<<"int++";
            str.replace(i,1,tobe);
        }
    }

    cout<<str;

 }