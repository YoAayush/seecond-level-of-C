#include<iostream>
using namespace std;
int main(){
    int size, i, j, find, count=0, rem;
    cout<<"enter the size of the array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter "<<size<<" elements in an Array\n";
    for(i=0; i<size; i++){
        cin>>arr[i];
    }

    cout<<"your entered elements are: ";
    for(i=0; i<size; i++){
        cout<<arr[i]<<"  ";
    }

    cout<<"which element do you want to find: ";
    cin>>find;
    //    n = sizeof(arr)/sizeof(*arr); // this is also a way to get length of array.
    for(i=0; i<size; i++){
        if(arr[i] == find){
            count++;
        } else{
            continue;
        }
    }

    if(count > 0){
        cout<<"element was found for a total of "<<count<<" times";
    }
    else{
        cout<<"element was not found"<<"\n";
    }

    cout<<"\nwhich element do you want to remove: ";
    cin>>rem;
    for(i=0; i<size; i++){
        if(arr[i] == rem){
            for(j=i; j<size-1; j++){
            	arr[j] = arr[j+1];
			}
			break;
        }
    }

    cout<<"array after deleting an element:"<<"\n";
    for(i=0; i<size-1; i++){
        cout<<arr[i]<<" ";
    }
}
