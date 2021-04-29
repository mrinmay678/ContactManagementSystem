#include <iostream>
#include <fstream>
#include "User.cpp"
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

    switch (ch)
    {
        case 1:
            string res = signup();
            if(res!=""){
                dashboard(res);
            }
            break;
        case 2:
            string res = login();
            if(res!=""){
                dashboard(res);
            }
            break;
        default:
            cout<<"Wrong Input..";  
    }
}