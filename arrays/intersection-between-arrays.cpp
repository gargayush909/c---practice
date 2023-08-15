#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    int m;
    cout<<"Enter the total values of first array: "<<endl;
    cin>>n;
    cout<<"Enter the total values of second array: "<<endl;
    cin>>m;

    vector <int> arr(n);
    vector <int> brr(m);

    
    cout<<"Enter the all  values for 1st array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }

    
    cout<<"Enter the all  values fro 2nd array: "<<endl;
    for(int i=0;i<m;i++){
        cin>>brr[i];

    }
    vector <int> ans;

    //finding intersection of the arrays:

    for(int i=0;i<n;i++){
        int element=arr[i];
        for(int j=0;j<m;j++){
            if(element==brr[j]){
                ans.push_back(element);
                brr[j] == -1;

            }
        }
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }





}