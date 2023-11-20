//ARMSTRONG NUMBER
#include <iostream>
#include<math.h>
#include<string.h>
using namespace std;
/*
int main(){
    int n;
    int sum = 0;
    int dup = n;
    // to find the len of a number in cpp  we use to_string(num).length()
    int order = to_string(n).length();

    while(n>0){
        int ld = n%10;
        sum += pow(ld,order);
        n = n/10;
    }
    if(sum == dup){
        cout<<"The given number is an Armstrong number";
    }
    else{
        cout<<"IT IS NOT AN ARMSTRONG NUMEBR";
    }
}
*/

/*

void printdivisors(int n){
    for(int i = 1;i<=n;i++){
        if(n%i==0){
            cout<< i << " ";
        }
    }
}

int main(){
    int n;
    cin>>n;
    printdivisors(n);
    return 0;
}
*/

//  REVERSE A STRING USING A SINGLE POINTER
/*
void f(int i , int arr[], int n){
    if(i>=n/2) return;
    swap(arr[i],arr[n-i-1]);
    f(i+1,arr,n);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i= 0;i<n;i++) cin>> arr[i];
    f(0,arr,n);
    for(int i=0;i<n;i++) cout<< arr[i]<< " ";
    return 0 ;
}
*/

// ROTATE LEFT BY D PLACES

/*

void rotateLeft(int arr[], int n , int d){
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int d;
    cin>>d;
    rotateLeft(arr,n,d);
    for(int i = 0 ;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}


// reverse function

void Reverse(int arr[], int start, int end){
    while(start<=end){
        int temp = arr[start];
        arr[start]= arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
*/

// INTERSECTION OF TWO SORTED ARRAY

