#include<bits/stdc++.h>
using namespace std;

void changeArr(int *arr, int n){
    for (int i =0; i<n; i++){
        arr[i]=i;
    }
}

int main(){
    int arr[100];
    int n;
    cin>>n;
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    changeArr(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    } 
    return 0;
}