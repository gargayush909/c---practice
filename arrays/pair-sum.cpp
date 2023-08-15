#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> arr{10,20,30,40,50,60};
    int key=80;
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            int sum=0;
            sum=arr[i]+arr[j];
            if(sum==key){
                cout<<"pais is: "<<arr[i]<<","<<arr[j]<<endl;
            }
            
        }

    }
}