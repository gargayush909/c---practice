#include <iostream>
using namespace std;
bool findingkey(int arr[][3], int rows, int cols, int key){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j]==key){
                return true;
            }

        }
        
        
    }
    return false;


}
int main(){

    int arr[3][3]={19,25,24,38,11,56,1,1,78};

    int rows=3;
    int cols=3;
    int key=17;
    if(findingkey(arr,rows,cols,key)){
        cout<<"Yes the key is present"<<endl;
    }
    else {
        cout<<"No key is not present"<<endl;
    }

}