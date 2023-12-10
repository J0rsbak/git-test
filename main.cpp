#include<iostream>
#include <string>
#include <fstream>
using namespace std;
bool login_bool = true;

bool verification(string identifier, string password){
    string line;
    fstream base;
    base.open("identifier_and_password_base.txt");
    if (!base.is_open()){
        cerr<<"Server Not Found 404."<<endl;
        return false;
    }else{
            
        }
    
}
void login(){
    while(login_bool == true){
        string identifier;
        string password;
        
        cout<<"Identifier: ";
        getline(cin,identifier);
        
        cout<<"Password: ";
        getline(cin,password);
        verification(identifier,password);
       
    }
}


int main(){
    login();







}