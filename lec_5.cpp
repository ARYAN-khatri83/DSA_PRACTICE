#include<iostream>
#include<math.h>
using namespace std;

/*
sum form 1 to n

int main(){
    int n;
    cout<<"Enter the number" << endl ; 
    cin>>n;

    int sum=0;

    for(int i=1;i<=n;i++){
        sum+=i;
    }
    cout<<sum<<endl;

}
*/

// FIBONNACI SERIES
/*
int main(){
   int n=10;

    int  a=0;
    int b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=1;i<=n;i++){
        int sum=a+b;
        cout<<sum<<" ";
        a=b;
        b=sum;

    }
}
*/

// PRIME NUMBER CHECKER

/*
int main(){
    int n;
    cout<<"Enter a numebnr"<<endl;
    cin>>n;
    bool isPrime=1;

    for(int i=2;i<n;i++){
        if(n%i==0){
            //cout<<"Not a prime number"<<endl;
            isPrime=0;
            break;
        }
    }
    if(isPrime==0){
        cout<<"Not a Prime number";
    }
    else{
        cout<<"IS a prime numeber";
    }
}
*/

// DECIMAL TO BINARY
/*
int main(){
    int n;
    cin>>n;

    int answer=0;
    int i =0;
    while(n!=0){
        int bit = n & 1; 
        answer = (bit * pow(10,i))  + answer;
        n=n>>1;
        i++;
    }
    cout<< "Answer is " << answer << endl;
}
*/

// BINARY TO DECIMAL

/*
int main(){

    int n;
    cin>>n;

    int ans=0;
    int i =0;
    while(n!=0){
        int digit = n%10;
        if(digit==1){
            ans = ans+pow(2,i);
        }
        n=n/10;
        i++;
    }
    cout<<"Answer is " << ans << endl;
}
*/


//SWITCH CASE
/*
int main(){
    int amount;
    cin>>amount;

    int Rs100,Rs50,Rs20,Rs1;

    switch(1){
         case 1: Rs100=amount/100;
              amount=amount%100;
              cout<<"No of 100 Rupee ="<<Rs100<<endl;
              
         
      case 2: Rs50=amount/50;
              amount=amount%50;
              cout<<"No of 50 Rupee ="<<Rs50<<endl;
              

      case 3: Rs20=amount/20;
              amount=amount%20;
              cout<<"No of 20 Rupee ="<<Rs20<<endl;
               

      case 4: Rs1=amount/1;
              amount=amount%1;
              cout<<"No of 1 Rupee ="<<Rs1<<endl; 
          
           }
        return 0;
    }

    */

// FUNCTIONS EXAMPLE

/*
int factorail(int n){
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact = fact*i;
    }
    return fact;

}
int nCr (int n, int r){
    int num = factorail(n);
    int deno = factorail(r)*factorail(n-r);
    return num/deno;


}

int main(){
    int n , r;
    cin>> n >> r;
    cout<<"Answer is " << nCr(n,r)<<endl;
}

*/

/*
void printCounting(int n){
    for(int i;i<=n;i++){
        cout<<i<< " ";
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    printCounting(n);

    return 0;
}
*/

// 1 is for prime number
// 0 is for not a prime number

/*
bool isPrime(int n){
    for(int i =2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    cin>>n;

    if(isPrime(n)){
        cout<< " is a  prime number" << endl;
    }
    else{
        cout<< " not a prime numeber";
    }
}
*/

// AP QUES (3*n+7)
/*
int AP(int n){
    int ap=3*n+7;
    return ap;
}

int main(){
    int n;
    cin>>n;
    int ans = AP(n);
    cout<<"Answer is :" << ans << endl;

    return 0;
}
*/

// SET BITS IN TWO NUMBERS
/*
int setbitsA(int a){
    int count =0 ;
    while(a!=0){
        if(a&1){
            count++;
        }
        a=a>>1;
    }
    return count;
}

int setbitsB(int b){
    int count = 0;
    while(b!=0){
        if(b&1){
            count++;
        }
        b=b>>1;
    }
    return count;
}

int main(){
    int a , b;
    cin>>a>>b;
    int ans = setbitsA(a);
    int ans1 = setbitsB(b);
    cout<<"Setbits of A is " << ans << endl;
    cout<< "Setbits of B is " << ans1 << endl;

    int total = ans+ans1;
    cout<< " total setbits are : " << total << endl; 

}
*/

// fibonacci nth item
/*
int fibonaci(int n){
    int a = 0;
    int b = 1;
    for(int i =2;i<=n;i++){
        int sum = a+b;
        a=b;
        b=sum;
    }
    return b;
}
int main()
{
    int n;
    cin >> n;
    
    cout << "The " <<n<<"th term of the series is = "<< fibonaci(n) << endl;

    return 0;
}
*/
// MIN AND MAX
/*
int getMin(int num[], int n) {

    int mini = INT_MAX;
    
    for(int i = 0; i<n; i++) {
        
        mini = min( mini, num[i]);
        
        //if(num[i] < min){
        //    min = num[i];
        //}
    }

    //returning min value
    return mini;
}

int getMax(int num[], int n) {

    int maxi = INT_MIN;
    
    for(int i = 0; i<n; i++) {

        maxi = max(maxi, num[i]);

       // if(num[i] > max){
         //   max = num[i];
       // }
    }

    //returning max value
    return maxi;
}

int main() {

    int size;
    cin >> size;

    int num[100];

    //taking input in array
    for(int i = 0; i<size; i++) {
        cin >> num[i];
    }

    cout << " Maximum value is " << getMax(num, size) << endl;
    cout << " Minimum value is " << getMin(num, size) << endl;


    return 0;
}
*/

void update(int arr[], int n) {

    cout << endl << "Inside the function" <<endl;
    
    //updating array's first element
    arr[0] = 120;

    //printing the array
    for(int i=0; i<3; i++) {
        cout << arr[i] <<" ";
    } cout<<endl;


    cout << "Going back to main function" << endl;
}


int main() {

    int arr[3] = {1,2,3};

    update(arr, 3);

    //printing the array
    cout<< endl << "Printing in main function" << endl;
    for(int i=0; i<3; i++) {
        cout << arr[i] <<" ";
    }
    cout << endl;

    return 0;
}



// SUM OF AN ARRAY
/*
int Sumarr(int arr[], int n){
    int sum  = 0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){
    int a[100],n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];

    }
    cout<<"SUM of the array : " << Sumarr(a,n) << endl;
}
*/

// LINEAR SEARCH
/*
bool search(int arr[], int size, int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int arr[10]={1,5,-6,8,4,66,5,7,4,87};

    cout<<"Enter the element to search for " << endl;
    int key;
    cin>>key;
     
    bool found = search(arr,10,key);

    if(found){
        cout<<"key is present"<<endl;
    }
    else{
        cout<<"Key ia not present"<<endl;
    }
}
*/

// REVERSE A STRING
/*
void reverse(int arr[], int n) {

    int start = 0;
    int end = n-1;

    while(start<=end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int n) {
    
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {

    int arr[6] = {1,4,0,5,-2,15};
    int brr[5] = {2,6,3,9,4};

    reverse(arr, 6);
    reverse(brr, 5);

    printArray(arr, 6);
    printArray(brr, 5);


    return 0;
}
*/