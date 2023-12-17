#include <iostream>
#include <string>
#include <cctype>
#include <windows.h>
#include <map>

using namespace std;

class Board{
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
Board normal;
class Piece{
    public:
        bool color;
        int* position;
        bool moved;
        int** posible_moves;
        Piece(bool a,int* b,bool c,int** d):color(a),position(b),moved(c),posible_moves(d){}

    class Pawn:public Piece{
        Pawn(bool a,int* b[2],bool c,int* d[32][2]):Piece(a, b, c, d){}
    };
    class Rook{

    };
    class Bishop{

    };
    class Knight{

    };
    class Queen{

    };
    class King{

    };
};

int main(){
    
    while (true) {
        int mode;
        cout<<"Enter 1 to fix a position and play from there. \nEnter 2 to play from the default position. \nEnter anything else to exit. \n";
        cin>>mode;
        Sleep(1000);
        system("CLS");
        if(mode == 1){
            cout<<"Enter the position in FEN. ";
            cin>>normal.position_board;
            Sleep(1000);
            system("CLS");
        }if(mode == 2){

        }else{
            return 0;
        }
        
    }
}

