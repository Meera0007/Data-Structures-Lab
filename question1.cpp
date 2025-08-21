#include <iostream>
using namespace std;
int main(){
    int arr[100];
    int n;
    int ch;
    do{
        cout<<"1. Create Data "<<endl;
        cout<<"2. Display Data "<<endl;
        cout<<"3. Search any element "<<endl;
        cout<<"4. Insert an element "<<endl;
        cout<<"5. Delete an element "<<endl;
        cout<<"6. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>ch;
        switch(ch){
            case 1:
            cout<<"Enter the number of elements you want in the array: ";
            cin>>n;
            cout<<"Enter the digits: ";
            for(int i=0;i<n;i++){
                cin>>arr[i];  
            }
            cout<<endl;
            break;
            case 2:
            cout<<"You array is: ";
            for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
            break;
            case 3:
            int pos;
            cout<<"Enter position to search: ";
            cin>>pos;

            if(pos>n){
                cout<<"Invalid position"<<endl;
            }else{
                cout<<"Element at position "<<pos<<" is "<<arr[pos-1]<<endl;
            }
            break;
            case 4:
            cout<<"Enter element to insert: "<<endl;
            int x;
            cin>>x;
            cout<<"Enter position of the element: "<<endl;
            int position;
            cin>>position;
            for(int i=n;i>=position;i--){
                arr[i]=arr[i-1];//right shift
            }
            arr[position-1]=x;
            n++;
            cout<<"Array after insertion: "<<endl;
            for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
            break;
            case 5:
            cout<<"Enter the position of the element you want to delete: "<<endl;
            int y;
            cin>>y;
            cout<<"The element you want to delete is: "<<arr[y-1]<<endl;
            for(int i=y-1;i<n-1;i++){
                arr[i]=arr[i+1];//left shift
            }
            n--;
            cout<<"Array after deletion: ";
            for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
            break;
        }
    }while(ch!=6);
    return 0;
}
