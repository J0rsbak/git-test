#include <iostream>
#include <string>
#include <cctype>
#include <windows.h>

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
void setuppawns(){
    pawn p1;
    p1.color=false;
    p1.has_moved=false;
    p1.position[0]=1;
    p1.position[1]=0;
    pawn p2;
    p2.color=false;
    p2.has_moved=false;
    p2.position[0]=1;
    p2.position[1]=1;
    pawn p3;
    p3.color=false;
    p3.has_moved=false;
    p3.position[0]=1;
    p3.position[1]=2;
    pawn p4;
    p4.color=false;
    p4.has_moved=false;
    p4.position[0]=1;
    p4.position[1]=3;
    pawn p5;
    p5.color=false;
    p5.has_moved=false;
    p5.position[0]=1;
    p5.position[1]=4;
    pawn p6;
    p6.color=false;
    p6.has_moved=false;
    p6.position[0]=1;
    p6.position[1]=5;
    pawn p7;
    p7.color=false;
    p7.has_moved=false;
    p7.position[0]=1;
    p7.position[1]=6;
    pawn p8;
    p8.color=false;
    p8.has_moved=false;
    p8.position[0]=1;
    p8.position[1]=7;
    pawn P1;
    P1.color=true;
    P1.has_moved=false;
    P1.position[0]=6;
    P1.position[1]=0;
    pawn P2;
    P2.color=true;
    P2.has_moved=false;
    P2.position[0]=6;
    P2.position[1]=1;
    pawn P3;
    P3.color=true;
    P3.has_moved=false;
    P3.position[0]=6;
    P3.position[1]=2;
    pawn P4;
    P4.color=true;
    P4.has_moved=false;
    P4.position[0]=6;
    P4.position[1]=3;
    pawn P5;
    P5.color=true;
    P5.has_moved=false;
    P5.position[0]=6;
    P5.position[1]=4;
    pawn P6;
    P6.color=true;
    P6.has_moved=false;
    P6.position[0]=6;
    P6.position[1]=5;
    pawn P7;
    P7.color=true;
    P7.has_moved=false;
    P7.position[0]=6;
    P7.position[1]=6;
    pawn P8;
    P8.color=true;
    P8.has_moved=false;
    P8.position[0]=6;
    P8.position[1]=7;
}
void setuprooks(){
    rook r1;
    r1.color=false;
    r1.has_moved=false;
    r1.position[0]=0;
    r1.position[1]=0;
    rook r2;
    r2.color=false;
    r2.has_moved=false;
    r2.position[0]=0;
    r2.position[1]=7;
    rook R1;
    R1.color=true;
    R1.has_moved=false;
    R1.position[0]=7;
    R1.position[1]=7;
    rook R2;
    R2.color=true;
    R2.has_moved=false;
    R2.position[0]=7;
    R2.position[1]=0;
}
void setupknights(){
    knight n1;
    n1.color=false;
    n1.position[0]=0;
    n1.position[1]=1;
    knight n2;
    n2.color=false;
    n2.position[0]=0;
    n2.position[1]=6;
    knight N1;
    N1.color=true;
    N1.position[0]=7;
    N1.position[1]=6;
    knight N2;
    N2.color=true;
    N2.position[0]=7;
    N2.position[1]=1;
}
void setupbishops(){
    bishop b1;
    b1.color=false;
    b1.position[0]=0;
    b1.position[1]=2;
    bishop b2;
    b2.color=false;
    b2.position[0]=0;
    b2.position[1]=5;
    bishop B1;
    B1.color=true;
    B1.position[0]=7;
    B1.position[1]=5;
    bishop B2;
    B2.color=true;
    B2.position[0]=7;
    B2.position[1]=2;
}
void setupmajesty(){

}
void setup(){
    setuppawns();
    setuprooks();
    setupknights();
    setupbishops();
}
int main(){
    setup();
}    
    

