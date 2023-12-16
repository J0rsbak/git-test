#include <iostream>
#include <string>
#include <cctype>

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
    void set_board(){
        for(int i = 0; i<8;i++){
            for(int j = 0; j<8;j++){
                board_current_status[i][j]=position_board[i*8+j];
            }
        }
        show_board();
    }
    void show_board(){
        for(int i =0; i<8; i++){
            for(int j = 0; j<8; j++){
                cout << board_current_status[i][j];
            }
            cout<<endl;
        }
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

int main(){

    
    board a;
    a.position_board = "r1bk3r/p2pBpNp/n4n2/1p1NP2P/6P1/3P4/P1P1K3/q5b1";
    a.set_position();


}


