#include<iostream>
using namespace std;
int binarySearch(int arr[],int n, int target){
    int left=0;
    int right=n-1;
    while(left<=right){
        int mid=(left+right)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<target){
            left=mid+1;
        }
        else if(arr[mid]>target){
            right=mid-1;
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter size of the array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements in a sorted order: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter number to search: ";
    cin>>target;
    int result=binarySearch(arr,n,target);
    if(result!=-1){
        cout<<"Found "<<target<<" at index "<<result<<endl;
    }
    else{
        cout<<"Not found "<<endl;
    }
    return 0;
}
