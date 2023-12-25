#include <iostream>
#include <string>
#include <windows.h>
#include "pieces.h"
#include "board.h"
using namespace std;



int main(){
    setup();
    while(true){
        normal.show_board();
        ask_for_square();
        
        
    }
}    
    

