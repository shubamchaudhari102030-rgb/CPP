
// ******
// *****
// ****
// ***
// **
// *

// starting la star asle tr space print karaychi garaj nahi


#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;

    int i=1;
    while(i<=n){

        //star print karo
        int space = n-i+1;
        while(space) {
        cout<<"*";
        space= space - 1;
        }


        cout<<endl;
        i=i+1;

    }

}
