#include<iostream>
using namespace std;
int sum(int n){
    if(n==0){
        return 0;
    }else{
        return sum(n-1)+n;
    }
}
int main(){
    int n;
    cout <<"Enter the number"<<endl;
    cin>>n;

    cout << "The sum of natural number till "<<n<<" = "<<sum(n);
    return 0;
}