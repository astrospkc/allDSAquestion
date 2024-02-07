#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr ={1,2,6,5,3};

    for(int i = 0; i<arr.size()-1; i++){
        for(int j = i+1; j<arr.size(); j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                
            }
        }
    }

    for(int i =0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }

}