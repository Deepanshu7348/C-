#include<bits/stdc++.h>
 
using namespace std;
int main(){
    
    vector<int> v;
    
    v.push_back(34);
    v.push_back(45);
    v.push_back(21);
    
    int s = v.size(); //3
    
    for(int i=0; i<s; i++){
        cout<<v[i]<<endl;
    }
    
    //A vector of size 5, and all values are 1
    
    vector<int> arr(5,1);
    
    for(int i = 0; i<arr.size(); i++){
        cout<<"arr value = "<<arr[i]<<endl;
    }
    
    vector<vector<int>> a(3, vector<int>(4,0));
    
    int sizeOfColumn = v[0].size();
    
}