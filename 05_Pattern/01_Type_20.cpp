
// D
// CD
// BCD
// ABCD


//Imp
//New concept.....Starting character....
//ata 'A' + i + j - 2 wala question ya starting question ne solve kara.....

#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;
    int i = 1;

    while(i<=n){
        int j = 1;
        char start = 'A' + n - i; // This is starting column Then bs increment ch karaych aahe
        while(j<=i){
            
            cout<<start;
            start = start + 1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}