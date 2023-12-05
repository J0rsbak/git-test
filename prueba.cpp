#include <iostream>
#include <cstdlib>
#include<Windows.h>
#include <sstream>
using namespace std;
	
	void game_mastermind(){
		string target = "     ";
	
	    for(int i = 0; i < 5; i++) {
	        target[i] = '0' + rand() % 10;
	    }
	    
	
	    cout << target << endl;
		
		
		
		
	}	
	
	void game_interior(int gamemode){
		int target = rand() % 101;
		class player{
		public:
			int value;
			
			int lifes = 6;
			int min_value = 0;
			int max_value = 100;
		};
		
		player one;

		player two;
	
		if(gamemode == 3){
			cout<<"Input target value: ";
			cin>>target;
			Sleep(1000);
			system("CLS");	
			
		}	
		if(gamemode != 3 && gamemode != 4){
			cout<<"Input the amount of lifes you would like: ";
			cin>>one.lifes;
			cout<<endl;
			system("CLS");
		}	
			

		two.lifes = one.lifes;

			

    	while(one.lifes != 0 || two.lifes != 0){
    		one.lifes--;
    		cout<<"Player 1: Choose a number between "<<one.min_value<<" and "<< one.max_value<<"."<<endl;
    		cin>>one.value;
    		if(one.value <one.min_value || one.value>one.max_value){
    			cout<<"Player 1: Your answer was invalid, restart the program. ";
    			break;
			}else if (one.value == target){
				cout<<"Player 1: Congratulations, you won!!! ";
				break;
			}else if (one.value < target){
				cout<<"Player 1: Your answer was lower than the target value. Your current amount of lifes is "<<one.lifes<<" . "<<endl<<endl;
				one.min_value = one.value;
				if (one.lifes == 0){
				cout<<"Player 1: You run out of lifes."<<endl;
    			}
			}else if (one.value > target){
				cout<<"Player 1: Your answer was higher than the target value. Your current amount of lifes is "<<one.lifes<<" . "<<endl<<endl;
				one.max_value = one.value;
				if (one.lifes == 0){
				cout<<"Player 1: You run out of lifes."<<endl;
    			}
			}
			two.lifes--;
			Sleep(2000);
			system("CLS");
    		if (gamemode == 2){
    			
    		cout<<"Player 2:Choose a number between "<<two.min_value<<" and "<< two.max_value<<"."<<endl;
    		cin>>two.value;
    		if (two.lifes == 0){
				cout<<"Player 2: You run out of lifes.";
    		}else if(two.value <two.min_value || two.value>two.max_value){
    			cout<<"Player 2:Your answer was invalid, restart the program. ";
    			break;
			}else if (two.value == target){
				cout<<"Player 2:Congratulations, you won!!! ";
				break;
			}else if (two.value < target){
				cout<<"Player 2:Your answer was lower than the target value. Your current amount of lifes is "<<two.lifes<<" . "<<endl<<endl;
				two.min_value = two.value;
				if (one.lifes == 0){
				cout<<"Player 2: You run out of lifes."<<endl;
    			}
			}else if (two.value > target){
				cout<<"Player 2:  Your answer was higher than the target value. Your current amount of lifes is "<<two.lifes<<" . "<<endl<<endl;
				two.max_value = two.value;
				if (one.lifes == 0){
				cout<<"Player 2: You run out of lifes."<<endl;
    			}
			}	
    		Sleep(2000);	
    		system("CLS");	
			}
			
		
		
			
			
			
		}
		
		
	}
	void game(){
		int gamemode = 0;
	    cout<<"Choose GAMEMODE."<<endl<<"GAMEMODE 1, GAMEMODE 2, GAMEMODE 3 or GAMEMODE 4"<<endl<<"Press 1, 2, 3 or 4 to pick either one."<<endl;
	    cin>>gamemode;
	    system("CLS");
		game_interior(gamemode);	
	}	

int main(){
	string contrasena = "12";
	string input;
	string input2;
	cout<<"Hello, input your username and password."<<endl<<"User: ";
	cin>>input2;
	while(input != contrasena){
		cout<<"Password: ";
		cin>>input;
		if(input!="12")
			cout<<"Incorrect password, try again:"<<endl;
		Sleep(1000);
		system("CLS");

		
		
	}
	int input3;
	cout<<"Accessed."<<endl;
	Sleep(1000);
	system("CLS");
	cout<<"Input 1 to play MASTERMIND and 2 to play SECRET NUMBER."<<endl;
	cin>>input3;
	Sleep(1000);
	system("CLS");
	if(input3<=0 || input3>=3){
		cout<<"Error, non-expected value.";
		return 0;
	}
	if (input3 == 2)
    	game();
    if (input3 == 1){
		game_mastermind();	
	}





}
