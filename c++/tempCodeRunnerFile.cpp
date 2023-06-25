void merge(int arr[],int l,int r){
    if(l<r){
        int mid= l+r/2;
        merge(arr,l,mid);
        merge(arr,mid+1,r);
        merging(arr,l,mid,r);
    }

}