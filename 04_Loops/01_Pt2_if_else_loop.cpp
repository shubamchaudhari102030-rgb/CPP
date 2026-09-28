#include<iostream>
using namespace std;

int main() {

    char ch;
    cout<< "Enter a Character:"<<endl;
    cin>> ch;

    if (ch >= 'a' && ch <='z'){
        cout<< "This is lower case" << endl;

    }

    else if(ch>='A' && ch<='Z'){
        cout<<"This is Upper case" << endl;
    }

    else if(ch>'0' && ch<='9' ){
        cout<<" This is numeric"<< endl;
    }

    else{
        cout<< "this is special case"<< endl;
    }
    

}