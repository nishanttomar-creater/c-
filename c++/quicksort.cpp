#include<iostream>
using namespace std;
void swap(int arr[],int i,int j){
    int temp=arr[j];
    arr[j]=arr[i];
    arr[i]=temp;

}
int partition(int arr[],int l ,int r){
    int pivot=arr[r];
    int i=l-1;
    for(int j=l;j<r;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr,i,j);
        }
        cout<<pivot<<endl;

    }
    swap(arr,i+1,r);
    return i+1;
}
void quick(int arr[],int l, int r){
    if(l<r){
        int pi=partition(arr,l,r);
        quick(arr,l,pi-1);
        quick(arr,pi+1,r);
    }
}

int main(){
    int arr[]={5,4,3,2,1};
    quick(arr,0,4);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;

}