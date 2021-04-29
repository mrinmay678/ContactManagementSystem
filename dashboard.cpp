using namespace std;

void showAll(string u){
    pass;
}

void addContact(string u){
    pass;
}

void removeContact(string u){
    pass;
}

void editContact(string u){
    pass;
}

void showProfile(string u){
    User user;
    user.profile(u);
}

void dashboard(string user){
    int menu;
    system("clear");
    cout<<"\t\t----------------------------Dashboard----------------------------"<<endl;
    cout<<"Enter 1 to Show All Contact.\nEnter 2 to Add Contact.\nEnter 3 to Remove Contact.\nEnter 4 to Edit Contact.\nEnter 5 to Show and Edit Profile.\nEnter 6 to Logout.\nEnter 7 to Exit.\n";
    cout<<"Enter choice: ";
    cin>>menu;
    switch(menu){
        case 1:
            showAll(user);
            break;
        case 2:
            addContact(user);
            break;
        case 3:
            removeContact(user);
            break;
        case 4:
            editContact(user);
            break;
        case 5:
            showProfile(user);
            break;
        case 6:
            logout(users);
            break;
        case 7:
            exit(0);
            break;
        default:
            break;
    }
}