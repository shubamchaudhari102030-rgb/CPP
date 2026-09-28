
// 1
// 23
// 345
// 4567
// 56789

//without line 24 likh ke dikhaO..


#include<iostream>
using namespace std;

int main() {

    int n;
    cin>> n;

    int i = 1;
    int count = 1;

    while(i<=n){
        int j =1;
        int value = i;
        while (j<=i){
            cout<<value;
            value = value + 1;
            j = j+1;
            
        }
        cout<<endl;
        i=i+1;
    }
}