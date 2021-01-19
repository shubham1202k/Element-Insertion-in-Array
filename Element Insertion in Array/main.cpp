#include<iostream>
using namespace std;



void display(int arr[], int n){
    // Code for displaying elements of an array
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
}

int indInsertion(int arr[], int size, int element, int capacity, int index){
    // code for Insertion in an array at a given index
    if(size>=capacity){
        return -1;
    }
    for (int i = size-1; i >=index; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    return 1;
}

int main(){
    int arr[10] = {4, 9, 14, 47, 90};
    int size = 5, element = 45, index=1;
    display(arr, size);
    indInsertion(arr, size, element, 100, index);
    size +=1;
    display(arr, size);
    return 0;
}
