#include<iostream>
using namespace std;

int power1(int m, int n){
    if(n==0){
        return 1;
    }else{
        return power1(m,n-1)*m;
    }
}

//power2
int power2(int m, int n){
    if(n==0){
        return 1;
    }
    if(n%2==0){
        return power2(m*m,n-1)*m;
    }
    else{
        return m*power2(m*m, (n-1)/2);
    }
}




int main(){
    int m = 2;
    int n = 3;
    cout<<"The value of "<<m<<" Power "<<n<<" using method1 is "<<power1(m, n)<<endl;
    cout<<"the value of "<<m<<" power "<<n<<" using method2 is "<<power2(m, n)<<endl;
    return 0; 


}