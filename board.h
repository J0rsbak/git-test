#include <iostream>
int showCurrentBoard(char Board[8][8]){
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            std::cout<<Board[i][j];
        }
        std::cout<<"\n";
    }
    return 0;
}