#include<iostream>
#include<array> // for array
#include<vector>
using namespace std;
/*
THIS IS FOR ARRAY

int main(){
    int basic[3] = {1,2,3};

    array<int,4>a = {1,2,3,4};   THIS IS HOW WE CREATE AN STL ARRAY 
    int size = a.size();

    for(int i=0;i<size;i++){    THIS IS HOW WE GET THE SIZE OF THE ARRAY BY A[I];
        cout<<a[i]<<endl;
    }

    cout<<"Element at 2nd index" << a.at(2)<<endl;
    cout<<"Empty or not" << a.empty()<<endl;
    cout<<"First Element" << a.front()<<endl;
    cout<<"Last element" << a.back()<<endl;
}
*/


// VECTOR
int main(){
    vector<int> v; // creates a empty container
    v.push_back(1);  // it will add 1 in the continer
    v.emplace_back(2);  // it will work same as the push back and it is a bit faster the push back

    vector<pair<int,int>>vec; // vector can be defined in pair as well
    // adding elements in a paired vector
    v.push_back({1,2});
    v.emplace_back(1,2);

    vector<int> v(5,100); // {100,100,100,100,100}

    vector<int> v(5); // a container of size 5 will be created with any garbage value

    vector<int> v1(5,20);  // container with 3 instance with 20 as their value
    vector<int> v2<v1>;  // v2 will be another container with same elements as v1


    // iterators used to access the memory address
    vector<int>::iterator it = v.begin();

    it++;
    cout<< *(it)<< "  ";

    it = it+2;cout;
    cout<<*(it)<<" ";

    vector<int>::iterator it = v.end();

    vector<int>::iterator it = v.rend(); // reverse end

    vector<int>::iterator it = v.rbegin(); // reverse begin

    cout<<v[0] << " "<< v.at(0);
    cout<<v.back() << " ";

    for(vector<int>::iterator it = v.begin(); it !=v.end();it++){  // print the whole vector 
        cout<<*(it)<<" ";   
    }
   // shortcut to print the vector

   for(auto it = v.begin(); it != v.end(); it++){  // auto means auto assination and it means it will automatically assigns the datatype acc to data
    cout<<*(it)<<" ";
   }

   for(auto it : v){  // for each loop to print . it on v
    cout<< it << " ";
   }


   // to delete an element
   // {10,12,22,23}
   v.erase(v.begin()+1); // this will delete the second element  that is 12

   // if we want to delete more the one number then we need to provide the starting and ending address [start,end) , it means that the starting numebr will be included whereas the end number wont be
   // {10,20,30,40,59}
   v.erase(v.begin()+2,v.begin()+4); // so the result would be {10,20,59}

   //INSERT FUNCTION

   vector<int>v(2,100); // {100,100}
   v.insert(v.begin(),300); // {300,100,100}; inserts right the beginning
   v.insert(v.begin()+1,2,10); //{300,10,10,100,100}  begin()+1,2,10 means position is begin()+1 , 2 instance and the numebr would be 10

   vector<int> copy(2.50); // {50,50}
   v.insert(v.begin(),copy.begin(),copy.end()); // {50,50,300,10,10,100,100}

   //{10,20}
   cout<<v.size(); //2 gives how many elemnts r there

   //{10,20}
   v.pop_back(); // {10}

   //v1-> {10,20}
   //v2-> {30,40}
   v1.swap(v2); // v1->{30,40} ,v2->{10,20}

   v.clear();
   cout<<v.empty();


}


// LIST

int main(){
    void explainList(){
        list<int> ls;

        ls.push_back(2); // {2}
        ls.emplace_back(4); //{2,4}

        ls.push_front(5); //{5,2,4}
        ls.emplace_front(); {2,4};


        // rest functions same as vector
        // begin,end,rbegin,rend,clear, insert , size , swap
    }
}

// DEQUEUE

int main(){
    void explainDeque(){
        deque<int>dq;
        dq.push_back(1); //{1}
        dq.emplace_back(2); // {1,2}
        dq.push_front(4); //{4,1,2}
        dq.emplace_front(3); // {3,4,1,2}

        dq.pop_back(); // {3,4,1}
        dq.pop_frony(); // {4,1}

        dq.back();

        // rest functions are same as the list and vector
        // bwgin,end , rbegin,rend,clear,insert,size , swap
        dq.front();
    }
}

// STACK

int main(){
    void explainStack(){
    stack<int> st;  // declaration 
    st.push(1); // {1}
    st.push(2); // {2,1}
    st.push(3); // {3,2,1}
    st.push(3); // {3,3,2,1}
    st.empalce(5); // {5,3,3,2,1}

    cout<< st.top(); // prints 5 "** st[2] is invalid **"

    st.pop(); // st looks like {3,3,2,1}
     
    cout<<st.top(); // 3
    cout<<st.size();// 4
    cout<<st.empty(); 
    stack<int>st1,st2;
    st1.swap(st2);
    
    }
}

// QUEUE

int main(){
    void explainQUEUE(){
        queue<int> q; // declaration
        q.push(1); // {1}
        q.push(1); // {1,2}
        q.emplace(4); //{1,2,4}

        q.back() += 5

        cout<<q.back(); // print 9

        // Q is {1,2,9}
        cout<<q.front(); // print 1

        q.pop(); //{2,9}

        cout<<q.front(); // prints 2

        // size swap empty same as swap

    }
}

// PRIOTITY QUEUE

int main(){
    void explainPQ(){
        priority_queue<int>pq;

        pq.push(5); // {5}
        pq.push(2); // {5,2}
        pq.push(8); // {5,2,8}
        pq.emplace(10); // {10,8,5,2}

        cout<< pq.top(); // prints 10

        pq.pop(); // {8,5,2}

        cout<<pq.top(); // prints 8

        // size swap empty functions same as others

        // MINIMUM HEAP

        priority_queue<int>,vector<int>,greater<int>>pq;
        pq.push(5); // {5}
        pq.push(2); // {2,5}
        pq.push(8); // {2,5,8}
        pq.emplace(10); //  {2,5,8,10}

        cout<<pq.top(); // prints 2

    }
}


// SET

int main(){
    voidexplainSet(){
        set<int>st;
        st.insert(1); // {1}
        st.emplace(2); // {1,2}
        st.insert(2); // {1,2} it wont store it again as elements shoud be unique
        st.insert(4); // {1,2,4}
        st.insert(3); // {1,2,3,4}  elments will be stored in a sorted manner

        // Functiona;ity of insert in vector can be used also , that only increases efficiency
        // begin(), end() , rbegin() , rend() , size(), empty() and swap() are some as those of above

        // {1,2,3,4,5}
        auto it = st.find(3);

        // {1,2,3,4,5}
        auto it = st.find(6); // will return st.end() when there is not number

        // {1,4,5}
        st.erase(5); // erase 5 , takes logarithmic time

        int cnt = st.count(1);

        auto it = st.find(3);
        st.erase(it); // it takes constant time

        // {1,2,3,4,5}
        auto it1 = st.find(2);
        auto it2 = st.find(4);
        st.erase(it1,it2); // after erase {1,4,5} {first,last)
        // lower_bound() and upper_bound() functions works in the same way
        // as in vector it does

        // this is the syntax

        auto it = st.lower_bound(2);
        auto ot = st.upper_bound(3);
    }
}


// MULTI SET
int main(){
    void explainMultiSet(){
        // Everthing is same as set
        // also stores duplicates elemnts 

        multiset<int>ms; // declaration
        ms.insert(1); // {1}
        ms.insert(1); // {1,1}
        ms.insert(1); // {1,1,1}

        ms.erase(1); // all 1's erased

        int cnt = ms.count(1);

        // only a single one erased
        ms.erase(ms.find(1));

        ms.erase(ms.find(1),ms.find(1)+2); // it will delete first and second eleemnt
        // rest al functions same as set
    }
}

// UNIQUE SET

int main(){
    void explainUSet(){
        // lower_bound and upper_bound function
        // does not works , rest all functions are the same, 
        // as above it does not stores in any particular order it has a better complexity then set in most cases , expect some when collision happens
        // it is not sorted and contaons unique elements
    }
}


// MAP

int main(){
    void explainMap(){
        // methods to define a map
        map<int,int> mpp;
        map<int,pair<int,int>> mpp;
        map<pair<int,int> , int> mpp;

        // ways to store the values , map stores the values in sorted oder
        mpp[1]= 2;
        mpp.emplace({3,1});
        mpp.insert({2,4});
        mpp[{2,3}] = 10;
        {
            {1,2}
            {2,3}
            {3,1}
        }
        for(auto it : mpp){
            cout<<it.first<<" " << it.second << endl;
        }

        cout<<mpp[1];
        cout<<mpp[5]; // prints null

        auto it = mpp.find(3);
        cout<< *(it).second; 

        auto it = mpp.find(3); // it will give np.end() if there is not any number 

        // This is the syntax
        auto it = mpp.lower_bound(2);

        auto it = mpp.upper_bound(3);

        // erase , swap , size , empty , are same as above

    }
}


// MULTI MAP 

// DUPLICATE KEY BUT IN SORTED ORDER
int main(){
    void explainMultiMap(){
        // everthing is same as map , only it can store multiple keys
        // only mpp[key] can not be used here
    }
}

// UNORDERED MAP 
// UNIQUE BUT NOT IN SORTED ORDER

int main()[
    void explainUnorderedMpa(){
        // same as set and unordered_Set difference
    }
]


// some imp algorithms
// if we wanna sort an array just use the sort function

int main(){
    void explainExtra(){
        sort(a,a+n);
        sort(v.begin(),v.end());

        sort(a+2,a+4); // if we wanna just sort some part of an array

        // iof u want to sort in descending order
        sort(a,a+n,greater<int>);
        pair<int,int> a[] = {{1,2},{2,1},{4,1}};

        // sort it according to second element
        // if second element is same , then sort it according to first element but in descending

        sort(a,a+n, comp); // comp is a self written comparator
        // {{4,1}, {2,1}, {1,2}} ;

        int num = 7;
        int cnt = __builtin_popcount(); // will return the number of setbits

        long long num = 122323343434;
        int cnt = __builtin_popcount();;

        string s = "123";
        sort(s.begin(),s.end());
        do{
            cout<< s << endl;
        } while(next_permutation(s.begin(),s.end()));
        // max element
        int maxi = *max_element(a,a+n);
    }
}