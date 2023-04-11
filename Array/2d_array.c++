#include<iostream>
using namespace std;
int main(){
    int A[2][3]; //decleration
    
    //method2
    int B[2][3] = {
        {23,45,67},
        {34,56,77}
       };

       int *C[2];
       C[0] = new int[3];
       C[1] = new int[5];

      //method 3 double pointer
       int **D;
       D = new int*[2];
       D[0] = new int[3];
       D[1] = new int[5];
       return 0;
}