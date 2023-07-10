#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin>>size;
    int arr[size];
    int maximum=INT_MIN;
    int minimum=INT_MAX;
    
    for( int i=0;i<size;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<size;i++){
        if(arr[i]>maximum){
            maximum=arr[i];
        }
        if(arr[i]<minimum){
            minimum=arr[i];
        }
    }
    
    for( int i=0,j=size-1;i<=j;i++,j--){
        int temp;
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
     
    }
    
    
    cout<<"maximum value is"<<maximum<<endl<<"minimum    vale is "<<minimum;
    
}
