#include<iostream>
using namespace std;

void binary_search(int arr[], int key,int n ){
    int low=0;
    int high=n-1;
     while(low<=high){
        int mid = low + (high - low)/2;
        
        if(arr[mid]==key){
            cout<<"key found at index :"<<mid;
            break;
        }
       else if(key<arr[mid]){
            high=mid-1;
        }
        else if (key>arr[mid]){
            low=mid+1;
        }
     }
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=5;
    binary_search(arr,key,n);
}