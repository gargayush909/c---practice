#include <iostream>
#include <vector>
using namespace std;
int main(){

    int arr[]={1,2,3,4}; //array ki initizialization mai ayega arr k sath bracket agr pehle se nhi btare ki kitna size ka h
    int sizea=4;
    int brr[]={5,6,7};
    int sizeb=3;

    vector <int> ans;

    for(int i=0;i<sizea;i++){
        ans.push_back(arr[i]);

    }
    for(int i=0;i<sizeb;i++){
        ans.push_back(brr[i]);

    }

    cout<<"here is the union: ";

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }



}