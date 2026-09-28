//Write a function that takes an unsigned integer and returns the 
// number of '1' bits has (also known as the hamming weight)



//NOT_SMJ


#include<iostream>
using namespace std;
int main() {

    int n;
    cin>>n;

    int count =0;
    while(n!=0){

        // checling last bit
        if(n&1){
            count++;
        }
        n=n>>1;

    }
    cout<< count;
    return 0;
}