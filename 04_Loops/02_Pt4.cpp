
// Identify  Prime number or not

// if we need to chec 7 
// then 2 to 6 madhe check kara (1 ans 7 ke beech wale)

#include<iostream>
using namespace std;

int main() {

    int n;
    cout<<"Enter the value of n:";
    cin>> n;
    
    int i=2;

    while(i<n) {
        //divide hogaya , then not prime

        if(n%i==0){
            cout<< "Not Prime for "<< i << endl;
        }

        else{
            cout<<"Prime for " << i<< endl;
        }
        i= i+1;
    }
}