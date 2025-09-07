#include<iostream>
using namespace std;
int main(){
    int n=6;
    int target=11;
    int arr[6]={1,2,3,4,5,6};
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++)
        if(arr[i]+arr[j]==target){
            cout<<i<<" "<<j<<endl;
        }
    }
}