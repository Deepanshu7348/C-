#include<iostream>
using namespace std;
int main(){
    //static array
    int a[5]= {4,5,6,7,8};
    cout<<a[3];  //o/p=7


    //dynamic_array
    int *p;
    p = new int[5];
    p[0] = 1;
    p[1] = 2;
    p[2] = 3;
    p[3] = 4;
    p[4] = 5;
    cout<<p[2]<<endl;
    return 0;
}