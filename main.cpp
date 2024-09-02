#include<iostream>

#include <string>
#include <unordered_map>
#include"board.h"
using namespace std;
char Board[8][8]={
    {'R','N','B','Q','K','B','N','R'},
    {'P','P','P','P','P','P','P','P'},
    {' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' '},
    {'p','p','p','p','p','p','p','p'},
    {'r','n','b','q','k','b','n','r'}
};
string lol;
string coordinateXY;
std::unordered_map<string, string> coordinatesToNumber = {
    {"70","a1"},{"71","a2"},{"72","a3"},{"73","a4"},{"74","a5"},{"75","a6"},{"76","a7"},{"77","a8"},
    {"60","b1"},{"61","b2"},{"62","b3"},{"63","b4"},{"64","b5"},{"65","b6"},{"66","b7"},{"67","b8"},
    {"50","c1"},{"51","c2"},{"52","c3"},{"53","c4"},{"54","c5"},{"55","c6"},{"56","c7"},{"57","c8"},
    {"40","d1"},{"41","d2"},{"42","d3"},{"43","d4"},{"44","d5"},{"45","d6"},{"46","d7"},{"47","d8"},
    {"30","e1"},{"31","e2"},{"32","e3"},{"33","e4"},{"34","e5"},{"35","e6"},{"36","e7"},{"37","e8"},
    {"20","f1"},{"21","f2"},{"22","f3"},{"23","f4"},{"24","f5"},{"25","f6"},{"26","f7"},{"27","f8"},
    {"10","g1"},{"11","g2"},{"12","g3"},{"13","g4"},{"14","g5"},{"15","g6"},{"16","g7"},{"17","g8"},
    {"00","h1"},{"01","h2"},{"02","h3"},{"03","h4"},{"04","h5"},{"05","h6"},{"06","h7"},{"07","h8"}
    
};
bool turn = false;
int main(){
   while (true){
        if(turn == false){
            cout << "White's turn" << endl;

            std::cin>>coordinateXY;
            if(coordinatesToNumber.find(coordinateXY)==coordinatesToNumber.end()){
                
                
                std::cout<<coordinatesToNumber["g3"];


                turn = true;
            }else{
                std::cout<<"invalid input"<<endl;
                turn = false;
                continue;
            }

            
            
        }else{
            cout << "Black's turn" << endl;
            std::cin>>coordinateXY;
            

            turn = false;

        }
    
   }
   
   showCurrentBoard(Board); 
}