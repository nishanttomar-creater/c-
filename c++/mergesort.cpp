#include<iostream>
using namespace std;
void merging(int arr[],int l,int mid, int r){
    int n1=mid-l+1;
    int n2=r-mid;
    int a[n1];
    int b[n2];
    for(int i=0;i<n1;i++){
        a[i]=arr[l+i];

    }
    for(int i=0;i<n2;i++){
        b[i]=arr[mid+1+i];
    }
    cout<<a<<endl<<b;
    int i=0;
    int j=0;
    int k=l;
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            arr[k]=a[i];
            k++;i++;
        }
        else{
            arr[k]=b[j];
            k++;j++;
        }

    }
    while(i<n1){
        arr[k]=a[i];
        k++;i++;
    }
    while(j<n2){
        arr[k]=b[j];
        k++;j++;
    }
}
void merge(int arr[],int l,int r){
    if(l<r){
        int mid= l+r/2;
        merge(arr,l,mid);
        merge(arr,mid+1,r);
        merging(arr,l,mid,r);
    }

}
int main(){
    int arr[]={3,2,4,5,6,1,7,8,9};
    merge(arr,0,8);
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


}