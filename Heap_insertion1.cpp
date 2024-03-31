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
    }
};

int main(){
    heap h;
    h.print(); cout<<"HI\n";
    h.insert(55);
    h.insert(54);
    h.insert(53);
    h.insert(50);
    h.insert(52);
    
  

    h.print();
}