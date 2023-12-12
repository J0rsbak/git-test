#include<iostream>
#include <string>
#include <fstream>
using namespace std;


bool verification(string identifier, string password){
    
    string line;
    ifstream base("C:\\Users\\estau\\repos\\git-test\\identifier_and_password_base.txt");
    
    if (!base.is_open()){
        cerr<<"Server Not Found 404."<<endl;
        return false;
    }else{
        while (getline(base, line)){

            if(line == identifier + " " + password){
                base.close();
                return true;
            }

        }
        return false;
    }
    
}
bool login(){
    while(true){
        string identifier;
        string password;
        
        cout<<"Identifier: ";
        cin>>identifier;
        
        cout<<"Password: ";
        cin>>password;
        return verification(identifier,password);
       
    }
}