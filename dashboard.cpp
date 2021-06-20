using namespace std;

void showAll(string u){
    cout<<1;
}

void addContact(string u){
    cout<<1;
}

void removeContact(string u){
    cout<<1;
}

void editContact(string u){
    cout<<1;
}

void showProfile(string u){
    cout<<1;
}

void logout(string u){
    cout<<1;
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
            logout(user);
            break;
        case 7:
            exit(0);
            break;
        default:
            break;
    }
}