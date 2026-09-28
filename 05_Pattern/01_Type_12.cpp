
// AAAAA
// BBBBB
// CCCCC
// DDDDD
// EEEEE

// concept of TypeCast
// Not SMJ


#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;
    int i = 1;

    while(i<=n){
        int j = 1;
        while(j<=n){
            char ch = 'A' + i -1; //+,- ki vajah se int mai convert kar raha tha isiliye char ka use karke typecast kar diya
            cout<< ch;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}