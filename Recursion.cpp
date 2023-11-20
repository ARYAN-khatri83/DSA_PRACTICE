#include<iostream>
using namespace std;

// IS SORTED ARRAY
/*
bool isSorted(int arr[], int size) {

    //base case
    if(size == 0 || size == 1 ){
        return true;
    }

    if(arr[0] > arr[1])
        return false;
    else {
        bool remainingPart = isSorted(arr + 1, size - 1 );
        return remainingPart;
    }

}

int main() {

    int arr[5] = {2,4,10,9,9};
    int size = 5;

    bool ans = isSorted(arr, size);

    if(ans){
        cout << "Array is sorted " << endl;
    }
    else {
        cout << "Array is not sorted " << endl;
    }

    return 0;
}
*/

int getSum(int *arr , int size){
    // base case
    if(size == 0){
        return 0;
    }
    if(size == 1){
        return arr[0];
    }
    int remaining_part = getSum(arr+1 , size-1);
    int sum = arr[0] + remaining_part;
    return sum;
}

int main(){
    int arr[5] = {1,2,3,4,5};
    int size = 5;

    int sum = getSum(arr,size);

    cout << " Sum is " << sum << endl;
    return 0;
}