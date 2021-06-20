#include <fstream>
#include".secret/passwordhashing.cpp"

using namespace std;

fstream creds;
fstream idFile;


class User{
    private:
        string id;
        string name;
        string email;
        string username;
        unsigned long int phone;
        string password;

    public:
        bool createUser(string n,string e,unsigned long int p,string pas){
            
            bool present = false;
            string line;

            creds.open("file_system/creds.csv", ios::in);
            while(creds.good()){
                getline(creds, line);
                if(line.find(e)<line.length()){
                    present=true;
                    break;
                }
            }

            creds.close();

            if(present==true){
                return false;
            }

            // ID Generation
            idFile.open("file_system/id.txt", ios::in);
            getline(idFile, id);
            idFile.close();
            idFile.open("file_system/id.txt", ios::out);
            idFile << (stoi(id)+1);
            idFile.close();

            name = n;
            email = e;
            username = "CMS"+id;
            phone = p;
            password = hashing(pas);

            // Saving Data to File
            creds.open("file_system/creds.csv", ios::out | ios::app);
            creds << id << " "
                << name << " "
                << email << " "
                << username << " "
                << phone << " "
                << password << " "
                << ",\n";
            creds.close();
            return true;
        }

        bool loginUser(string u, string pas){
            bool present = false;

            string line;
            creds.open("file_system/creds.csv", ios::in);
            while(creds.good()){
                getline(creds, line);
                if(line.find(u)<line.length()){
                    present=true;
                    break;
                }
            }
            creds.close();

            if(present==false){
                return false;
            }

            if(line.find(pas)<line.length()){
                return true;
            }
            else{
                return false;
            }
        }
        void profile(string user){
            bool present = false;
            string line;
            
            creds.open("file_system/creds.csv", ios::in);
            while(creds.good()){
                getline(creds, line);
                if(line.find(user)<line.length()){
                    present=true;
                    break;
                }
            }
            creds.close();
            cout<<line;
        }
};