#include<iostream>
using namespace std ;

int main(){
    int n=8;
    int arr[]={6,2,4,3,5,5,7,7};
    int max1=0;
    int max2=0;
    int max3=0;
    for(int i=0;i<n;i++){
        if(arr[i]>max1){
            max3=max2;
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i]>max2 && arr[i]<max1){
            max3=max2;
            max2=arr[i];
        }
        else if(arr[i]>max3 && arr[i]<max2){
            max3=arr[i];
        }
    }
    cout<<"Third maximum element is: "<<max3<<endl;
    
    return 0;

}
