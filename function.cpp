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
class pieces{
    public:
        bool color;

    class Rook{

    };
    class Knight{

    };
    class Bishop{

    };
    class Queen{

    };
    class King{

    };
    class Pawn{

    };
    void current_board_status(string board[8][8]){
        for(int i = 0; i<8;i++){
        for(int j = 0; j<8;j++){
            cout<<board[i][j];
            if(j == 7){
                cout<<endl;
            }
        }
    }
    }
};
string board[8][8]={
    {"R","N","B","Q","K","B","N","R"},
    {"P","P","P","P","P","P","P","P"},
    {"-","-","-","-","-","-","-","-"},
    {"-","-","-","-","-","-","-","-"},
    {"-","-","-","-","-","-","-","-"},
    {"-","-","-","-","-","-","-","-"},
    {"p","p","p","p","p","p","p","p"},
    {"r","n","b","q","k","b","n","r"}
};
