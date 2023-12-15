#include <iostream>
#include <string>
using namespace std;


class board{
    public:
        string position_board = "RNBQKBNRPPPPPPPP--------------------------------pppppppprnbqkbnr";
        string board_current_status[8][8]={
            {"R","N","B","Q","K","B","N","R"},
            {"P","P","P","P","P","P","P","P"},
            {"-","-","-","-","-","-","-","-"},
            {"-","-","-","-","-","-","-","-"},
            {"-","-","-","-","-","-","-","-"},
            {"-","-","-","-","-","-","-","-"},
            {"p","p","p","p","p","p","p","p"},
            {"r","n","b","q","k","b","n","r"}
        };
    void show_board(){
        for(int i = 0; i<8;i++){
            for(int j = 0; j<8;j++){
                cout<<board_current_status[i][j];
                if(j == 7){
                    cout<<endl;
                }
            }
        }
    };
    void set_position_in_board(){
        for(int i = 0; i<8; i++){
            for(int j = 0; j<8;j++){
                board_current_status[i][j]=position_board[i*8+j];
            }
        }
    }


};
class pieces{
    public:
        string square;
        
};
int main(){
    int a = 0;
    while(true){
        cout<<"Press 1 to play from a specific position."<<endl<<"Press 2 to play from the default position"<<endl<<"Press 3 to exit the program"<<endl;
        if (a == 1){
            cout<<"Input state of the board in FEN.";
        }else if(a == 2){
            
        }else if(a == 3){

        }else{
            cout<<"Invalid value."<<endl;
        }

    }
    
    


}


