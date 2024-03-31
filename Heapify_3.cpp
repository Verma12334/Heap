#include<iostream>
using namespace std;

class heap{
    public:
    int arr[100];
    int size;

    heap(){
        arr[0]=-1;
        size=0;
    }

    void insert(int value){

        size=size+1;
        int index=size;
        arr[index]=value;

        while(index>1){
            int parent=size/2;

            if(arr[parent]<arr[index]){//with the property max heap
               
               swap(arr[parent],arr[index]);
            }
            else{
                return;
            }
         
        }
    }//T.C.=O(log(n))

    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<"  ";
        }
        cout<<"\n";
    }


};


    void Heapify(int arr[],int n,int i){
        int largest=i;
        int left=2*i;
        int right=2*i+1;

    if(left<n && arr[largest] <arr[left]){
    largest=left;
    }
    if(right<n && arr[largest] <arr[right]){
    largest=right;
    }

    if(largest!=i){
        swap(arr[largest],arr[i]);
        Heapify(arr,n,largest);
    }
    }


int main(){
    heap h;
    h.print(); cout<<"HI\n";
    h.insert(55);
    h.insert(54);
    h.insert(53);
    h.insert(50);
    h.insert(52);
    h.print();

    int arr[6]={-1,54,53,55,52,50};
    int n=5;
    for(int i=n/2;i>0;i--){
        Heapify(arr,n,i);
    }
    cout<<"Print the array\n";
    for(int i=1;i<=5;i++){
        cout<<arr[i]<<" ";
    }
}