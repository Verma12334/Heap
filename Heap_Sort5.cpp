// #include<iostream>
// using namespace std;

//   void Heapify(int arr[],int n,int i){
//         int largest=i;
//         int left=2*i;
//         int right=2*i+1;

//     if(left<=n && arr[largest] <arr[left]){
//     largest=left;
//     }
//     if(right<=n && arr[largest] <arr[right]){
//     largest=right;
//     }

//     if(largest!=i){
//         swap(arr[largest],arr[i]);
//         Heapify(arr,n,largest);
//     }
//     }

//     void heapsort(int arr[],int n){
//         int size=n;
//         while(size>1){
//             swap(arr[size],arr[1]);
//             size--;

           
//             Heapify(arr,size,1);
//         }
//     }

// int main(){
//     int arr[6]={-1,54,53,55,52,50};
//     int n=5;
//     for(int i=n/2;i>0;i--){
//         Heapify(arr,n,i);
//     }
//     cout<<"Print the array\n";
//     for(int i=1;i<=n;i++){
//         cout<<arr[i]<<" ";
//     }
//     heapsort(arr,n);
//     cout<<" \nPrint the array\n";
//     for(int i=1;i<=5;i++){
//         cout<<arr[i]<<" ";
//     }
// }


#include<iostream>
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
}
