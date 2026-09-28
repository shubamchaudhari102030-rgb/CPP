

// Prime or not
// if we need to check 7 
// then 2 to 6 madhe check kara (1 ans 7 ke beech wale)


#include<iostream>
using namespace std;

int main () {

    int n;
    cout<< " Enter the value of n:";
    cin>> n ;

    bool isPrime = 1;

    for(int i =2; i<n; i++){
        if(n%i == 0){
            isPrime = 0;
            break;

        }
    }

    if(isPrime ==0) {
        cout<<"Not a prime number"<<endl;
    }

    else{
        cout<<"is a Prime Number" << endl;
    }



}