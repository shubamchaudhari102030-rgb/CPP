

// 0,1,1,2,3,5,8,13,21,.....
// sum of starting 2 is 3rd one and contuinue

//Ex....

// a and b to likh diye humne...ab a ko b ke andar daalna hoga b
//    because ab a next value hogi and b usse next value hogi 

#include<iostream>
using namespace std;

int main () {

    int n = 10;
    int a=0;
    int b = 1;
    cout<<a<<" "<<b<<" ";

    for(int i=1; i<=n; i++){
        int nextNum = a+b;
        cout<<nextNum<<" ";

        a=b;
        b=nextNum;

    }
}