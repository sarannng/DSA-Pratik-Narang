#include<iostream>
#include<map>
using namespace std;


int main(){
map<int, int> mp;
mp.insert({2,1});
mp.insert({2,34});

cout<<mp.count(2);
 

}

// map::count
// #include <iostream>
// #include <map>
// using namespace std;

// int main ()
// {
//   std::map<char,int> mymap;
//   char c;

//   mymap ['a']=101;
//   mymap ['a']=202;
//   mymap ['f']=303;

// //   for (c='a'; c<'h'; c++)
// //   {
// //     std::cout << c;
// //     if (mymap.count(c)>0)
// //       std::cout << " is an element of mymap.\n";
// //     else 
// //       std::cout << " is not an element of mymap.\n";
// //   }


// cout<<mymap.count('d');

//   return 0;
// }


// public static void main(String[] args){
//     byte a = 127;
//     byte b = ++a;
//     System.out.println(b);
// }