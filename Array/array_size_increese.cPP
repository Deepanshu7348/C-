#include<iostream>
using namespace std;
int main(){
    int *p;
    p = new int[5];  //size 5

    for(int i=0; i<5; i++){
        p[i] = 10;  //every value is 10
    }

    //want to store 6 value

    int *q;
    q = new int[6];
    for (int i = 0; i < 5; i++)
    {
        q[i] = p[i];
    }
    q[5] = 20;

    //print p
    for(int i=0; i<5; i++){
        cout<<p[i]<<" ";
    }
    cout<<endl;
     //print q
    for(int i=0; i<6; i++){
        cout<<q[i]<<" ";
    }
    cout<<endl;



    return 0;
}