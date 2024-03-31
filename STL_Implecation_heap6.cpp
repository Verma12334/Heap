#include<iostream>
#include<queue>
using namespace std;

void Heapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;  // Corrected index for left child
    int right = 2 * i + 2; // Corrected index for right child

    if (left < n && arr[largest] < arr[left]) {
        largest = left;
    }
    if (right < n && arr[largest] < arr[right]) {
        largest = right;
    }

    if (largest != i) {
        swap(arr[largest], arr[i]);
        Heapify(arr, n, largest);
    }
}

void heapsort(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--) { // Corrected loop condition
        Heapify(arr, n, i);
    }

    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);
        Heapify(arr, i, 0);
    }
}

int main() {
    int arr[6] = {-54, 53, 55, 52, 50}; // Removed the -1 from the array
    int n = 5;
    
    cout << "Print the array\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    heapsort(arr, n);

    cout << "\nPrint the array\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout<<"Using Priority Queue Here\n";
    //max heap
    priority_queue<int>pq;
    pq.push(4);
    pq.push(2);
    pq.push(5);
    pq.push(3);
    pq.push(0);
    pq.push(78);

    cout<<"Element at top: "<<pq.top()<<endl;
    pq.pop();
    cout<<"Element at top: "<<pq.top()<<endl;
    cout<<"Size is: "<<pq.size()<<endl;

    if(pq.empty()){
        cout<<"Priority queue is empty\n";
    }
    else{
        cout<<"Priority queue is not empty\n";
    }


    //max heap
    priority_queue<int,vector<int>,greater<int>>minheap;
    minheap.push(4);
    minheap.push(2);
    minheap.push(5);
    minheap.push(3);
    minheap.push(0);
    minheap.push(78);

    cout<<"Element at top: "<<minheap.top()<<endl;
    minheap.pop();
    cout<<"Element at top: "<<minheap.top()<<endl;
    cout<<"Size is: "<<minheap.size()<<endl;

    if(minheap.empty()){
        cout<<"Priority queue is empty\n";
    }
    else{
        cout<<"Priority queue is not empty\n";
    }
}


