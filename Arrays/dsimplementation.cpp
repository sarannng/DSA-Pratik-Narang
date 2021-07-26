#include<iostream>
#include<map>
#include<vector>
#include<unordered_map>
#include<set>
#include<unordered_set>
using namespace std;

int main(){

map<int, int> mp;
unordered_map<int, int> ump;

set<int> s;
unordered_set<int> us;
vector<int> ar = {2,6,4,34,1};

for(int i=0; i<ar.size(); i++)
{ 
    mp.insert({ar[i],i});
}

    for(auto x : mp)
    cout<<x.first<<" ";  

cout<<"\n"<<"=============="<<"\n";


for(int i=0; i<ar.size(); i++)
{ 
    ump.insert({ar[i],i});
}

    for(auto x : ump)
    cout<<x.first<<" ";  

cout<<"\n-----------------------------\n";


for(int i=0; i<ar.size(); i++)
{ 
    s.insert(ar[i]);
}

    for(auto x : s)
    cout<<x<<" ";  

cout<<"\n"<<"=============="<<"\n";


for(int i=0; i<ar.size(); i++)
{ 
    us.insert(ar[i]);
}

    for(auto x : us)
    cout<<x<<" ";  




}