#include<iostream>
using namespace std;

int binarySearch(int arr[] , int size , int key){

    int start = 0;
    int end = size-1;

    int mid = (start+end)/2;

    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }

        if(key>arr[mid]){
            start = mid+1;
        }
        else{
            start = mid-1;
        }
        mid = (start+end)/2;
    }
    return -1;
}


int main(){
    int even[6] = {1,2,4,16,20,24};
    int odd[5] = {1,6,8,16,30};

    int evenIndex = binarySearch(even,6,20);

    cout<< "Index of 20 is " << evenIndex << endl;

    int oddIndex = binarySearch(odd,5,16);

    cout << " Index of 16 is " << oddIndex << endl;

    return 0;
}