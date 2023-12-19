#include<iostream>
using namespace std;
#include<vector>

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
/*
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
*/

// FUNCTIONAL WAY SUM TILL N
/*
int sum(int n){
  if(n==0) return 0;
  return n +sum(n-1);
}

int main(){
    int n =3;
    cout << sum(n);

    return 0;
}
*/

/*
void f(int i , int arr[] , int n){
    if(i >= n/2) return ;
    swap(arr[i],arr[n-i-1]);
}

int main(){
    int n ;
    cin>>n;
    int arr[n];
    for(int i =0 ;i<n ;i++) cin >> arr[i];
    f(0,arr,n);
    for(int i =0 ;i<n ;i++) cout << arr[i] << " ";
    return 0;
}

*/


// Print all subsequences
/*
void printF(int ind, vector<int> &ds, int arr[], int n) {
    if (ind == n) {
        for (auto it : ds) {
            cout << it << " ";  // Added space between 'it' and '""'
        }
        cout << endl;
        return;
    }

    ds.push_back(arr[ind]);
    printF(ind + 1, ds, arr, n);
    ds.pop_back();

    printF(ind + 1, ds, arr, n);
}

int main() {
    int arr[] = {3, 1, 2};
    int n = 3;
    vector<int> ds;
    printF(0, ds, arr, n);
    return 0;
}

*/

// Print subsequences whose sum is k
void PrintS(int ind, vector<int> &ds, int s, int sum, int arr[], int n) {
    if (ind == n) {
        if (s == sum) {
            for (auto it : ds) cout << it << " ";
            cout << endl;
        }
        return;
    }
    ds.push_back(arr[ind]);
    s += arr[ind];

    // Recursive call without popping the last element
    PrintS(ind + 1, ds, s, sum, arr, n);

    // Backtrack: pop the last element to explore other possibilities
    ds.pop_back();
    s -= arr[ind];

    // Recursive call without including the current element
    PrintS(ind + 1, ds, s, sum, arr, n);
}

int main() {
    int arr[] = {1, 2, 1};
    int n = 3;
    int sum = 2;
    vector<int> ds;
    PrintS(0, ds, 0, sum, arr, n);
    return 0;
}