#include <iostream>
#include <string>
#include <cctype>
#include <windows.h>
#include <map>

using namespace std;

bool turn = true;
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



map<string,int>white_pieces = {{"P",1},{"N",2},{"B",3},{"R",5},{"Q",10},{"K",0}};
map<string,int>black_pieces = {{"p",1},{"n",2},{"b",3},{"r",5},{"q",10},{"k",0}};
    


int main(){
    int mode;
    map<string,int[2]>grid;
    for(int i =0; i<8; i++){
        for(int j = 0; j<8; j++){
            string str = char(69 + i) + to_string(i);
            grid[str]={i,j};
        }
        
    }
    while (true) {
        cout<<"Enter 1 to fix a position and play from there. \nEnter 2 to play from the default position. \nEnter anything else to exit. \n";
        cin>>mode;
        Sleep(1000);
        system("CLS");
        if(mode == 1){
            cout<<"Enter the position in FEN. ";
            cin>>position_board;
            Sleep(1000);
        system("CLS");
        }if(mode == 2){

        }else{
            return 0;
        }
        while(true){
            show_board();
            if(turn == true){
                cout<<"White to move. \n";
            }else{
                cout<<"Black to move. \n";
            }
            cout<<"Enter the square where the piece you want to move is: ";

        }
    }
}

