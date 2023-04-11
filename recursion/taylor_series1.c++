#include<iostream>
using namespace std;

double calculate_e(int x, int n){
    static double p=1, f=1;
    double r;
    if(n==0){
        return 1;
    }
    else{
        r = calculate_e(x, n-1);
        p = p*x;
        f = f*n;
        return r+p/f;
    }
}


int main(){
    int x = 2;
    int n = 4;
    cout<<" The value of e power "<<x<<" for "<<n<<" number of terms is "<<calculate_e(x,n);
}