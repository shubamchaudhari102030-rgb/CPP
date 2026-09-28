

// for madhe 2 nahi  tr 3 variables pn cahltat



#include<iostream>
using namespace std;

int main() {

    int n;
    cout<<"Enter the value of n:";
    cin>> n;

    cout<<"Printing count from 1 to n..."<< endl;
    // initilization ; condition ; updation
    for(int i = 1; i<=n; i++){
        cout<<i<< endl;
    }


    //      OR


    int k;
    cout<<"Enter the value of k:";
    cin>> k;

    cout<<"Printing count from 1 to k..."<< endl;
    int p = 1;
    // initilization ; condition ; updation
    for( ; ; ){
        if(p<=n){
            cout<<p<< endl;
        }

        else{
            break;
        }

        p++;

    

}

}