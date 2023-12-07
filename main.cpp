#include<iostream>
#include <string>
#include <fstream>
using namespace std;
bool login_bool = true;

bool verification(string identifier, string password){
    int z = 0;
    string aux[2];
    string line;
    ifstream base("identifier_and_password_base.txt");
    if (!base.is_open()){
        cerr<<"Server Not Found 404."<<endl;
        return false;
    }else{
            getline(base,line);
            z = 0;
            aux[0].clear();
            aux[1].clear();
            cout<<line.size();
            for(int i = 0; i<line.size();i++){
                cout<<"wow";
                if(line[i]==' '){
                    z++;
                }else if(z==0){
                    aux[0]+=line[i];
                }else{
                    aux[1]+=line[i];  
                }
            }
            if(aux[0]=="o" && aux[1]=="o"){
                cout<<"lol";
                return true;
            }else{
                cout<<"no";
                return false;
            }
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