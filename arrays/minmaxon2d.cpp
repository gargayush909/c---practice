#include <iostream>
#include <limits.h>
using namespace std;
void findMax(int arr[][3],int rows,int cols){
    int max=INT_MIN;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j]>max){
                max=arr[i][j];

            }
        }

    }
    cout<<"The max value in the array is: "<<max<<endl;

}
void findMin(int arr[][3],int rows,int cols){
    int min=INT_MAX;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j]<min){
                min=arr[i][j];

            }
        }

    }
    cout<<"The min value in the array is: "<<min<<endl;

}

int main(){

    int arr[3][3]={19,25,24,38,11,56,1,1,78};

    int rows=3;
    int cols=3;
    
    findMax(arr,rows,cols);
    findMin(arr,rows,cols);

}