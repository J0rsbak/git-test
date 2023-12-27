#ifndef BOARD_H
#define BOARD_H
#include <string>
#include <iostream>
#include "pieces.h"
using namespace std;
string type;
string input_square;
int input_position[2];
int output_position[2];
void converter(){
    switch (input_square[0]) {
        case 'a':
            output_position[1] = 0;
            break;
        case 'b':
            output_position[1] = 1;
            break;
        case 'c':
            output_position[1] = 2;
            break;
        case 'd':
            output_position[1] = 3;
            break;
        case 'e':
            output_position[1] = 4;
            break;
        case 'f':
            output_position[1] = 5;
            break;
        case 'g':
            output_position[1] = 6;
            break;
        case 'h':
            output_position[1] = 7;
            break;
    }

    switch (input_square[1]) {
        case '1':
            output_position[0] = 7;
            break;
        case '2':
            output_position[0] = 6;
            break;
        case '3':
            output_position[0] = 5;
            break;
        case '4':
            output_position[0] = 4;
            break;
        case '5':
            output_position[0] = 3;
            break;
        case '6':
            output_position[0] = 2;
            break;
        case '7':
            output_position[0] = 1;
            break;
        case '8':
            output_position[0] = 0;
            break;
    }
    //cout<<output_position[0]<<output_position[1];
}

class board{
    public:
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
        
};
void identifier(){
    
}
void is_valid(){

}

board normal;
void ask_for_square(){
    
    while(true){
        while(true){
            cout<<"Enter the square where the piece you want to move is (e.g., a1): ";
            cin>>input_square;
            converter();
            if(normal.board_current_status[output_position[0]][output_position[1]]!="-"){
                identifier();
                break;
            }
        }
        input_position[0]=output_position[0];
        input_position[1]=output_position[1];
        while(true){
            cout<<"Enter the square where you want the piece to move (e.g., a1): ";
            cin>>input_square;
            converter();
            if(is_valid()){

            }
        }
    }
}
#endif