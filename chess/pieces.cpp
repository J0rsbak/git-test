#include <iostream>
#include <string>
#include <cctype>
#include <windows.h>
#include "board.cpp"

using namespace std;
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
    P1.position[0]=1;
    P1.position[1]=0;
    pawn P2;
    P2.color=true;
    P2.has_moved=false;
    P2.position[0]=1;
    P2.position[1]=1;
    pawn P3;
    P3.color=true;
    P3.has_moved=false;
    P3.position[0]=1;
    P3.position[1]=2;
    pawn P4;
    P4.color=true;
    P4.has_moved=false;
    P4.position[0]=1;
    P4.position[1]=3;
    pawn P5;
    P5.color=true;
    P5.has_moved=false;
    P5.position[0]=1;
    P5.position[1]=4;
    pawn P6;
    P6.color=true;
    P6.has_moved=false;
    P6.position[0]=1;
    P6.position[1]=5;
    pawn P7;
    P7.color=true;
    P7.has_moved=false;
    P7.position[0]=1;
    P7.position[1]=6;
    pawn P8;
    P8.color=true;
    P8.has_moved=false;
    P8.position[0]=1;
    P8.position[1]=7;
}
void setuprook(){
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
void setup(){
    setuppawns();
    setuprook();
}