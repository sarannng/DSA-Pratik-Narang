//trapping rain water problem

#include<iostream>
#include<vector>
using namespace std;
int volume(vector<int> height);

int volume(vector<int> height){
//corner cases
int n = height.size();

if(n<=1){
    return 0;
}
else{
    // left and right

    vector<int> left(n,0),right(n,0);
    left[0] = height[0];
    right[n-1] = height[n-1];


    for(int i=1; i<n; i++){
        left[i] = max(height[i], left[i-1]);
        right[n-i-1] = max(height[n-i-1], right[n-i]);
    }

    int water =0;
    for(int i=0; i< n; i++){
        water += min(left[i], right[i]) - height[i];
    }
return water;
}


//      vector<int> left;
//      vector<int> right;
//      int maxtill = 0;
//      int maxtill2 = 0;
//      int total = 0; 
    
//      for(int i=0; i<height.size(); i++){           // {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
//          if(height[i] > maxtill){
//               maxtill = height[i];
//               left.push_back(maxtill);
           
//          }
//          else{
//              left.push_back(maxtill);
//          } 
//      }


//      for(int i=height.size(); i>0; i--){
//          if(height[i] > maxtill2){
//               maxtill2 = height[i];
        
//               right.push_back(maxtill2);
//               } 
//               else{
//            right.push_back(maxtill2);
//          } 
//      }
     


//     for(int i=0; i<left.size(); i++){
//         cout<<left[i]<<" "<<right[i]<<"\n";
//     }

//     for(int i=0; i< height.size(); i++){
//        total +=  min(right[i], left[i]) - height[i];
//       // cout<<"this is total: "<<total<<"\n";
//     }

// return total;
}

int main(){
//vector<int> height = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
 vector<int> height = {4, 1, 2};

cout<<"-===========\n";
cout<<volume(height);
}