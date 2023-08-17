#include <iostream>
using namespace std;
void Transpose(int arr[][3], int rows, int cols){
    int temp[3][3];
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            temp[i][j]=arr[j][i];
        }
    }

    cout<<"The transposed matrix is here: "<<endl;

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<temp[i][j]<<" ";
        }
        cout<<endl;
    }

}
int main(){
    int arr[3][3]={19,25,24,38,11,56,1,1,78};

    int rows=3;
    int cols=3;

    cout<<"The normal matrix is here: "<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    Transpose(arr,rows,cols);
}