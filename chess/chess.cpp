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



