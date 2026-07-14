#include <iostream>
using namespace std;
void revereseArray(int arr[],int size){
    int start = 0, end = size -1;

    while (start < end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main()
{
    // Reverse of Array Values using Functions
    int arr[]= {2,3,4,5,6,7,8,9}; // Even Array
    int size = 8;

    revereseArray(arr, size);

    for(int i=0; i<size; i++){
        cout << arr[i]<<" ";
    }
    cout<<"\nValue of Index 3: "<<arr[3];
    cout<<endl;

    int arr2[] = {1,2,3,4,5}; // Odd Array
    revereseArray(arr2,5);
    for(int j=0; j<5; j++){
        cout << arr2[j]<<" ";
    }

    return 0;
}
