#include<iostream>
using namespace std;

struct Array{
    int A[10];
    int size;
    int length;
};

void Display(struct Array arr){
    int i;
    for(i=0; i<arr.length; i++){
        cout<<arr.A[i]<<" ";
    }
}

void swap(int *x, int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

void Reverse(struct Array *arr){
    int *B;  int i, j;
    B=(int *)malloc(arr->length*sizeof(int));
    for(i=arr->length-1, j=0; i>=0; i--,j++)
    B[j]=arr->A[i];
    for(i=0; i<arr->length;i++)
    arr->A[i]=B[i];

}
int main(){
    struct Array arr1 = {{2,3,9,16,18,21,28,32,35},10,9};
    Reverse(&arr1);
    Display(arr1);
    return 0;

}