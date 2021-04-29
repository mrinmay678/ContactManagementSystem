using namespace std;

string login(){
    system("clear");
    cout<<"\t\t----------------------------Login Page----------------------------"<<endl;
    string username, password;
    int i=0;
    while(i<3){
        User user;
        cout<<"Enter your username or email: ";
        cin>>username;
        cout<<"\nEnter your password: ";
        cin>>password;
        if(user.loginUser(username, password)==true){
            cout<<"Yuppie! You are successfully loggedin.\n";
            return username;
        }
        else{
            cout<<"Try Again.\n";
            if(i++==2){
                cout<<"\nMax Attempts expired, try again later.\n";
                exit(0);
            }
        }
    }
    return "";
}

string signup(){
    system("clear");
    cout<<"\t\t----------------------------Signup Page----------------------------"<<endl;
    int i=0;
    string first_name, last_name, e_mail, password1, password2;
    unsigned long int phone_no;
    while(i<3){
        cout<<"Enter your first name: ";
        cin>>first_name;
        cout<<"\nEnter your last name: ";
        cin>>last_name;
        cout<<"\nEnter your email: ";
        cin>>e_mail;
        cout<<"\nEnter your phone number: ";
        cin>>phone_no;
        cout<<"\nEnter your password: ";
        cin>>password1;
        cout<<"\nEnter your password again: ";
        cin>>password2;
        if (password1.compare(password2)==0){
            User user;
            bool res = user.createUser(first_name+" "+last_name,e_mail,phone_no,password1);
            if(res==true){
                cout<<"Your account is successfully created\n";
                return e_mail;
            }
            else{
                cout<<"Oops, you are already signed up! Please Login.\n";
                return login();
            }
        }
        else{
            if(i++==2){
                cout<<"\nMax. Attempts expired, try again later";
                exit(0);
            }
        }
    }
    return "";
}
