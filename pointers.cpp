#include<iostream>
using namespace std;

int main(){
/*
    int num =5;

    cout<<num<<endl;

    // address of operator - &

    cout << " address of num is" << &num <<endl;

    int *ptr = &num;

    cout << "Address is : " << ptr << endl;
    cout << "Value is :  " << *ptr << endl;

    double d = 4.3;
    double *p2 = &d;

    cout << " Address is : " << p2 << endl;
    cout << " value is : "<< *p2 << endl;

    cout<< " size of integer is " << sizeof(num) << endl;
    cout<< " size of pointer is " << sizeof(ptr) << endl;
    cout<< " size of double is " << sizeof(p2) << endl;
    */



   int num = 5;
   int a = num;
   cout<< " a before " << num << endl;
   a++;
   cout<< " a after " << num << endl;

   int *p = &num;
   cout<< " before " << num <<endl;
   (*p)++;
   cout<< " after " <<num<<endl;

   // copying a pointer

   int *q = p;
   cout << p << " _ " << q << endl;
   cout << *p << " _ " << *q << endl;

   // imp concept

   int i =3 ; 
   int *t = &i;
   // cout << (*t)++ << endl;
   *t = *t +1;
   cout<<*t<<endl;
   cout << "before t " << t << endl;
   t = t+1;
   cout << " after t" << t << endl;
   

   return 0;
   

/*
  int i =5;

  int *q = &i;
  cout << q << endl;
  cout << *q << endl;

  int *p = 0;
  p = &i ; 
  cout << p <<endl;
  cout << *p << endl;
  */
}