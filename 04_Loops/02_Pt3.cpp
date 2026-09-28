

  //sum of even and odd numbers 

#include<iostream>
using namespace std;

int main() {

    int n;
    cout<<"Enter the value of n:";
    cin>> n;
    
    int i=2;  // if i = 1 then sum of odd number priint hot hota
    int sum = 0;
    
    while(i<=n) {
        sum = sum + i;
        i = i + 2;
    }
    cout<<sum<<endl;
}