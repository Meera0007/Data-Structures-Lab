#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,count=0;
    cout<<"Enter size of array u want: ";
    cin>>n;
    int pair[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>pair[i];
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(i<j && pair[i]>pair[j]){
                count++;
            }
        }
    }
    cout<<"Number of Inversion: "<<count<<endl;
}
