#include<iostream>
using namespace std;

    void Heapify(int arr[],int n,int i){
        int samllest=i;
        int left=2*i+1;//tale 0's base index
        int right=2*i+2;

    if(left<n && arr[samllest]>arr[left]){
    samllest=left;
    }
    if(right<n && arr[samllest] >arr[right]){
    samllest=right;
    }

    if(samllest!=i){
        swap(arr[samllest],arr[i]);
        Heapify(arr,n,samllest);
    }
    }

int main(){
    int arr[6]={-1,54,53,55,52,50};
    int n=6;
    for(int i=n/2-1;i>=0;i--){
        Heapify(arr,n,i);
    }
    cout<<"Print the array\n";
    for(int i=0;i<=5;i++){
        cout<<arr[i]<<" ";
    }
}