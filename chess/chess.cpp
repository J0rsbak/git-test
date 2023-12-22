#include <iostream>
#include <string>
#include <cctype>
#include <windows.h>
#include <map>

using namespace std;

class board{
    public:
        string position_board = "rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR";
        string board_current_status[8][8]={
            {"r","n","b","q","k","b","n","r"},
            {"p","p","p","p","p","p","p","p"},
            {"-","-","-","-","-","-","-","-"},
            {"-","-","-","-","-","-","-","-"},
            {"-","-","-","-","-","-","-","-"},
            {"-","-","-","-","-","-","-","-"},
            {"P","P","P","P","P","P","P","P"},
            {"R","N","B","Q","K","B","N","R"}
        };

    void show_board(){
        for(int i =0; i<8; i++){
            for(int j = 0; j<8; j++){
                cout << board_current_status[i][j];
            }
            cout<<endl;
        }
    }    
    void set_board(){
        for(int i = 0; i<8;i++){
            for(int j = 0; j<8;j++){
                board_current_status[i][j]=position_board[i*8+j];
            }
        }
        show_board();
    }

    void set_position(){
            
        for(int i = 0; i<position_board.size();i++){
            if(isdigit(position_board[i])){
                int num=position_board[i] - '0';
                position_board.erase(i,1);
                position_board.insert(i,num,'-');
                i--;
                    
            }else if(position_board[i]=='/'){
                position_board.erase(i,1);
                i--;
            }
                
        }
        set_board();
    }
};
board normal;

class piece{
    public:
        bool color;
        int position[2];
        int moves[32][2];
        int posible_moves[32][2];
        
};
class pawn: public piece{
    public:
        bool has_moved;
};
class rook: public piece{
    public:
        bool has_moved;
};
class king: public piece{
    public:
        bool has_moved;
};
class queen: public piece{
    public:
};
class knight: public piece{
    public:
};
class bishop: public piece{
    public:
};

void setup(){
    pawn p1;
    p1.color = false;
    p1.position = {6,0};
    p1.has_moved = false;
}
int main(){
    setup();
    
    do{
        normal.show_board();
    }while(false);
}

