#include <iostream>
#include "auth.cpp"
#include "dashboard.cpp"

using namespace std;

int main(){
    system("clear");
    cout<<"\t\t----------------------------Welcome to Contact Management System----------------------------"<<endl;

    int ch;

    cout<<"Enter 1 to Signup"<<endl;
    cout<<"Enter 2 to Login"<<endl;
    cout<<"Enter choice: ";
    cin>>ch;
    string result;
    switch(ch){
        case 1:
            result = signup();
            if(result!=""){
                dashboard(result);
            }
            break;
        case 2:
            result = login();
            if(result!=""){
                dashboard(result);
            }
            break;
        default:
            cout<<"Wrong Input..";  
    }
}